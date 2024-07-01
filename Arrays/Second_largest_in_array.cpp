//find the largest
int largest=arr[0];
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
//make a random value for second large say -1 annd pull conditon which says that is greatest but not equal to largest

int slarge= -1;
for (int i = 0; i < n; i++)
    {
        if(arr[i]>slarge && arr[i] != largest){
            slarge=arr[i];
        }
    }
// ////////////////////////////////////////////
// above approach uses 2 for loop 
// now we will do it with another approach

int largest=arr[0];
int slarge= -1;

for (int i = 0; i < n; i++)
    {
        if(arr[i]>largest){
            slarge=large;
            largest=arr[i];
        }
        else if(arr[i]>slarge && arr[i] < largest){
            slarge=arr[i];
        }
    }

