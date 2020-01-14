#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
    DESTDIR_ARG="--root=$DESTDIR"
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/fuelfighter/cartographer_ws/src/diy_driverless_car_ROS/rover_cv/lane_detection"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/fuelfighter/cartographer_ws/install/lib/python2.7/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/fuelfighter/cartographer_ws/install/lib/python2.7/dist-packages:/home/fuelfighter/cartographer_ws/build/lane_detection/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/fuelfighter/cartographer_ws/build/lane_detection" \
    "/usr/bin/python2" \
    "/home/fuelfighter/cartographer_ws/src/diy_driverless_car_ROS/rover_cv/lane_detection/setup.py" \
    build --build-base "/home/fuelfighter/cartographer_ws/build/lane_detection" \
    install \
    $DESTDIR_ARG \
    --install-layout=deb --prefix="/home/fuelfighter/cartographer_ws/install" --install-scripts="/home/fuelfighter/cartographer_ws/install/bin"
