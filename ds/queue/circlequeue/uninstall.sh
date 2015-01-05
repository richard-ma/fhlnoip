export INSTALL_PATH=/usr/local/lib
export INCLUDE_PATH=/usr/local/include

test -e $INSTALL_PATH/libcirclequeue.so && sudo rm $INSTALL_PATH/libcirclequeue.so
test -e $INCLUDE_PATH/circlequeue.h && sudo rm $INCLUDE_PATH/circlequeue.h
