 #!/bin/sh
echo $FT_NBR1 + $FT_NBR2 | \
	#substitui caracteres especiais pelos numeros
	tr "\'\\\\\"\?\!"  01234 | \
	#substitui letras pelos numeros
	tr 'mrdoc' 01234 | \
	#conversor de base
	xargs echo 'obase=13; ibase=5;' | \
	bc | \
	#substitui o resultado numerico nas letras
	tr 0123456789ABC 'gtaio luSnemf'