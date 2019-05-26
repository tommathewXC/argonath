#!/usr/bin/env bash

input="$@"
while IFS= read -r line
do
  rm $line
done < "$input"