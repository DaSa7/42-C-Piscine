declare -a liste=()
ligne=0
for pass in `cat /etc/passwd | tr -d ' '`
do
	if [ ${pass:0:1} != '#' ]
	then
		ligne=`expr $ligne + 1`
		if (( $ligne%2==0 ))
		then
			pass=`echo "$pass" | awk -F':' '{print $1}' | rev`
			liste=( "${liste[@]}" "$pass")
		fi
	fi
done
