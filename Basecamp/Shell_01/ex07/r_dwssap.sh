#!/bin/bash
cat /etc/passwd | \
	# Remove all comments
	cut -d ":" -f1 | \
	# print even-numbered lines
	awk 'NR % 2 == 0' | \
	#reverse all words
	rev | \
	#sort words in a reverse form
	sort -r | \
	#filter the number of lines
	sed -n "${FT_LINE1},${FT_LINE2}p" | \
	#remove "enter" and put ","
	tr "\n" "," | \
	#remove the last "," and put "."
	sed 's/,/, /g' | \
	#put "." final line
	sed 's/, $/./'