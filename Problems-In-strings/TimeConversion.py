
def timeConversion(s):
    l=list(s)
    if(l[-2]=='P'):
        if(l[0]=='1'and l[1]=='2'):
            x=l.pop()
            x=l.pop()
            k=""
            for i in l:
                k+=i
           
        else:
            y=int(l[0])*10+int(l[1])
            y=12+y
            y=str(y)
            l[0]=y[0]
            l[1]=y[1]
            x=l.pop()
            x=l.pop()
            k=""
            for i in l:
                k+=i
            
    else:
        if(l[0]=='1' and l[1]=='2'):
            l[0]=l[1]='0'
            x=l.pop()
            x=l.pop()
            k=""
            for i in l:
                k+=i
            
        else:
            x=l.pop()
            x=l.pop()
            k=""
            for i in l:
                k+=i
                
    return k
