// ======================================================================
// \title  Camera.cpp
// \author ethan
// \brief  cpp file for Camera component implementation class
// ======================================================================


#include <RpiFSW/Camera/Camera.hpp>
#include <FpConfig.hpp>

namespace Payload {

  // ----------------------------------------------------------------------
  // Construction, initialization, and destruction
  // ----------------------------------------------------------------------

  Camera ::
    Camera(
        const char *const compName
    ) : CameraComponentBase(compName)
  {

  }

  Camera ::
    ~Camera()
  {

  }

} // end namespace Payload
