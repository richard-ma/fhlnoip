export INSTALL_PATH=/usr/local/lib
export INCLUDE_PATH=/usr/local/include

test -e $INCLUDE_PATH/list.h || sudo ln -s $PWD/list.h $INCLUDE_PATH/list.h
