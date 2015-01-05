export INSTALL_PATH=/usr/local/lib
export INCLUDE_PATH=/usr/local/include

test -e $INSTALL_PATH/libdoublestack.so && sudo rm $INSTALL_PATH/libdoublestack.so
test -e $INCLUDE_PATH/doublestack.h && sudo rm $INCLUDE_PATH/doublestack.h
