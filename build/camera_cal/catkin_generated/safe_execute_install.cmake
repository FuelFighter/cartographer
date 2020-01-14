execute_process(COMMAND "/home/fuelfighter/cartographer_ws/build/camera_cal/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/home/fuelfighter/cartographer_ws/build/camera_cal/catkin_generated/python_distutils_install.sh) returned error code ")
endif()
