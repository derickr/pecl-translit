#!/bin/bash
phpize
./configure --quiet
make all install
echo "extension=translit.so" >> `php --ini | grep "Loaded Configuration" | sed -e "s|.*:\s*||"`
