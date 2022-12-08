if [ $# != 2 ]
then
echo "Invalid input!!!"
else
p1=`ls -l $1|cut -d " " -f1`
p2=`ls -l $2|cut -d " " -f1`
if [ $p1 == $p2 ]
then
echo "the file permissions are same and it is : "
echo "$p1"
else
echo "The file permissions are different"
echo "$1 : $p1"
echo "$2 : $p2"
fi
fi