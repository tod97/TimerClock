echo "Inserisci il commit: "
read input_variable
git add *
git add -u
git commit -m "$input_variable"
git push