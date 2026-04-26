#!/bin/bash

if [ $# -ne 1 ]; then
  echo "Usage: $0 xxx" 1>&2
  exit 1
fi

if ! [[ "$1" =~ ^[1-9][0-9]{,2}$ ]]; then
  echo "Usage: $0 xxx (x=[0-9])" 1>&2
  exit 1
fi

if [ ! -e ABC ]; then
  echo "Error: directory 'ABC' not exists." 1>&2
  exit 1
fi

mkdir -p ABC/$1

cp --update=none template.cpp ABC/$1/a.cpp
cp --update=none template.cpp ABC/$1/b.cpp
cp --update=none template.cpp ABC/$1/c.cpp
cp --update=none template.cpp ABC/$1/d.cpp
cp --update=none template.cpp ABC/$1/e.cpp
# cp --update=none template.cpp ABC/$1/f.cpp
# cp --update=none template.cpp ABC/$1/g.cpp
# cp --update=none template.cpp ABC/$1/h.cpp

exit 0