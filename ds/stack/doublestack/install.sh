export INSTALL_PATH=/usr/local/lib
export INCLUDE_PATH=/usr/local/include

test -e $INSTALL_PATH/libdoublestack.so || sudo ln -s $PWD/libdoublestack.so.1.0.0 $INSTALL_PATH/libdoublestack.so
test -e $INCLUDE_PATH/doublestack.h || sudo ln -s $PWD/doublestack.h $INCLUDE_PATH/doublestack.h
