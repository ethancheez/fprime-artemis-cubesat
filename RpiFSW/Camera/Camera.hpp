// ======================================================================
// \title  Camera.hpp
// \author ethan
// \brief  hpp file for Camera component implementation class
// ======================================================================

#ifndef Camera_HPP
#define Camera_HPP

#include "RpiFSW/Camera/CameraComponentAc.hpp"
#include <libcamera/libcamera.h>

namespace Payload {

  class Camera :
    public CameraComponentBase
  {

    public:

      // ----------------------------------------------------------------------
      // Construction, initialization, and destruction
      // ----------------------------------------------------------------------

      //! Construct object Camera
      //!
      Camera(
          const char *const compName /*!< The component name*/
      );

      //! Destroy object Camera
      //!
      ~Camera();


    };

} // end namespace Payload

#endif
