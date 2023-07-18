// 2337. Move Pieces to Obtain a String

class Solution {
public:
    bool canChange(string start, string target) {
        int n = start.size();
        
        int stIndex = 0;
        int tgIndex = 0;
        
        for(int i=0; i<n; i++)
        {
            if(start[stIndex] == target[tgIndex])
            {
                stIndex++;
                tgIndex++;
            }
            else{
                
                if(start[stIndex] == 'R')
                {
                    if(start[stIndex+1] == '_')
                    {
                        swap(start[stIndex], start[stIndex+1]);
                        stIndex++;
                    }
                    else{
                        return false;
                    }
                }
                
                else if(start[stIndex] == 'L')
                {
                    if(start[stIndex-1] == '_')
                    {
                        swap(start[stIndex], start[stIndex-1]);
                        stIndex++;
                    }
                    else{
                        return false;
                    }
                }
                
                else
                {
                    if(start[stIndex+1] == 'L')
                    {
                        swap(start[stIndex], start[stIndex+1]);
                        stIndex++;
                    }
                    else{
                        return false;
                    }
                }
            }
            
        }
        return true;
        
    }
};