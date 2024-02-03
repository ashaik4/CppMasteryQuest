
files=("file1.txt" "file2.txt" "file3.txt")

results=()

for file in "${files[@]}"; do
  grep -A 1 "account" "$file" | tr -d '"' > temp_result.txt  
  results+=($(cat temp_result.txt))
  rm temp_result.txt
done

printf "%s\n" "${results[@]}" | sort