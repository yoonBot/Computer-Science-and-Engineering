# CSE3013 Week01 Assignment01
# @author cse20192008

echo "working directory"

# if user does not input directory, change/set directory path to current directory
if [ ! $dir ];
    then 
    cd $PWD
    echo "${PWD}"

# if user inputs directory:
elif [ $dir ];
    then 

    # changes to directory if accessible. Exits with status 1 if not. 
    cd $dir || {
        echo "Error. '${dir}' is unaccessible. Please recheck your permissions and try again."
        exit 1
    }
    
    # once directory path has changed, print the changed directory path
    echo "${PWD}"

# Else, assume that input directory does not exist at all. 
else
    echo "Error. '${dir}' not found. Please try again."
    exit 1

fi

# forces file names to be renamed upper/lower to lower/uppercase, respectively
for file in *
    do
    mv $file `echo $file | tr '[a-z][A-Z]' '[A-Z][a-z]'`

done

# automatically prints out a list of files that have been changed
# (automatically prints out the results)
echo " "
ls
