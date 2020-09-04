BEGIN{
    ii=0
}


BEGINFILE{
    i=0
}


{
    ii+=1
    i+=1
    print $1,$2,i,ii
}