export INSTALL_PATH=/usr/local/lib
export INCLUDE_PATH=/usr/local/include

test -e $INSTALL_PATH/libcirclequeue.so || sudo ln -s $PWD/libcirclequeue.so.1.0.0 $INSTALL_PATH/libcirclequeue.so
test -e $INCLUDE_PATH/circlequeue.h || sudo ln -s $PWD/circlequeue.h $INCLUDE_PATH/circlequeue.h
