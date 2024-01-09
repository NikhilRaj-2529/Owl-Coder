//GFG
Node *n=NULL,*p=NULL,*t1=node1,*t2=node2,*ans=NULL,*temp=NULL;
if(t1==NULL && t2==NULL) return NULL;
else if(t1==NULL) ans=t2;
else if(t2==NULL) ans=t1;
else{
    while(t1!=NULL &&  t2!=NULL){
        temp=t1;
        if(t1->data <=t2->data){
            p=t1;
            t1=t1->next;
        }
        else{
            n=t2->next;
            if(p==NULL) p=t2;
            else p->next=t2;
            p=t2;
            t2->next=t1;
            t2=n;
        }
        if(ans==NULL) ans=p;
    }
    while(t1!=NULL){
        temp=t1;
        t1=t1->next;
    }
    temp->next=t2;
}
//return ans;
p=NULL;
while(ans!=NULL){
    n=ans->next;
    ans->next=p;
    p=ans;
    ans=n;
}
return p;
