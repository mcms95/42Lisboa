#! /bin/sh
find . -name "*.sh" -type f | sed 's/.sh$//' | xargs -n 1 basename
