#!/bin/bash
read -p "Enter a name: " name
n=$(echo "$name" | wc -c)
for ((i=1; i<=$n; i++))
do
    printf "${name:$i-1:1}" && printf "${name:$i-1:1}" | tr 'A-Za-z' 'a-zA-Z'
done
