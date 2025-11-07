#include <stdio.h>
int main(){
    int p[30], f[10], n, m, i, j, k=0, c=0, h;
    printf("Enter number of pages: ");
    scanf("%d",&n);
    printf("Enter page reference string: ");
    for(i=0;i<n;i++) scanf("%d",&p[i]);
    printf("Enter number of frames (min 3): ");
    scanf("%d",&m);
    for(i=0;i<m;i++) f[i]=-1;
    printf("\nPage\tFrames\t\tPage Fault\n");
    for(i=0;i<n;i++){
        h=0;
        for(j=0;j<m;j++) if(f[j]==p[i]) h=1;
        printf("%d\t",p[i]);
        if(!h){ f[k]=p[i]; k=(k+1)%m; c++; }
        for(j=0;j<m;j++) printf(f[j]==-1?"- ":"%d ",f[j]);
        printf("\t%s\n",h?"No":"Yes");
    }
    printf("\nTotal Page Faults = %d\n",c);
}