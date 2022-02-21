#!/bin/sh

cat /etc/passwd | grep -Ev '^#' | awk 'NR%2==0' | awk -F':' '{ print $1 }' | rev | sort -r | sed -n "$FT_LINE1,$FT_LINE2 p" | paste -s -d, - | awk '{print $1"."}' | tr -d '\n'
