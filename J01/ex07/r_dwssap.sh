#!/bin/bash
cat /etc/passwd | grep -v "^#^*" | sed -n "n;p" | rev | sort -r | sed -n $FT_LINE1, $FT_LINE2 p | tr "*:" "," | cut -d, -f8 | sed "s/_/_, /" | tr -d "\n" | sed 's/.\{2\}$/./'
