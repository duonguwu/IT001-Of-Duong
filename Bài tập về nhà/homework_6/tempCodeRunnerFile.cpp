int SoSanhBangNhauTheoSo(char s[],char t[])
{
    int n=strlen(s), m=strlen(t);
    if(n!=m)
        return 0;
    for(int i=0;i<n;i++){
        if(s[i]>=48&&s[i]<=57)
            if(s[i]!=t[i])
                return 0;
        if((s[i]>=97&&s[i]<=122)||(s[i]>=65&&s[i]<=90))
        {
            if((t[i]>=48&&t[i]<58)||((t[i]<97||t[i]>122)&&(t[i]<65||t[i]>90)))
                return 0;
        }
    }
    return 1;
}
