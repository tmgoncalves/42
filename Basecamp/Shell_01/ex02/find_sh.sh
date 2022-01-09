#!/bin/bash
#list all file with extension .sh
find . -type f -name "*.sh" | \
#display only file's name
xargs basename -s .sh