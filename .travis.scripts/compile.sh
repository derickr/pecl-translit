#!/bin/bash
phpize
./configure --quiet
make all install
echo "extension=translit" >> `php --ini | grep "Loaded Configuration" | sed -e "s|.*:\s*||"`
