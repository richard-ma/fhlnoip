export INSTALL_PATH=/usr/local/lib
export INCLUDE_PATH=/usr/local/include

test -e $INSTALL_PATH/liblinklist.so || sudo ln -s $PWD/liblinklist.so.1.0.0 $INSTALL_PATH/liblinklist.so
test -e $INCLUDE_PATH/linklist.h || sudo ln -s $PWD/linklist.h $INCLUDE_PATH/linklist.h
