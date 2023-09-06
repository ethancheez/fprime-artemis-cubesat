# F' Deployment for the Artemis Cubesat Kit

Activate the virtual environment
```sh
. venv/bin/activate
```

## Setup libcamera

Install dependencies:
```sh
sudo apt install gcc-arm-linux-gnueabihf g++-arm-linux-gnueabihf
pip3 install meson
pip3 install --upgrade meson
sudo apt-get install libyaml-dev python3-yaml python3-ply python3-jinja2 pkg-config
pip3 install ply
```

Build libcamera for Rpi Zero W:
```sh
export RPI_TOOLS=<path to installation directory of ARM cross compiler>
export PATH=$RPI_TOOLS:$PATH

cd lib/raspberrypi/libcamera
meson setup build -Dprefix=<path-to-fprime-artemis-cubesat>/lib/raspberrypi/libcamera/build/ -Dpipelines=rpi/vc4 -Dipas=rpi/vc4 --cross-file ../libcamera-aarch32.txt
cd build
ninja
ninja install
```

Build `fprime-artemis-cubesat` with libcamera:
```
export PKG_CONFIG_PATH=<path-to-fprime-artemis-cubesat>/lib/raspberrypi/libcamera/build/lib/pkgconfig/
export RPI_TOOLCHAIN_DIR=<path-to-rpi-cross-compiler>

fprime-util generate raspberrypi
fprime-util build raspberrypi
```
