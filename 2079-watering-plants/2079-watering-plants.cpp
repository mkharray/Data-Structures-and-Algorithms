class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
     int steps =  0;
        int prev = -1;
        int bucket = capacity;
        for(int i = 0 ; i < plants.size(); i++){
            if(plants[i] <= bucket){
                bucket -=plants[i];
                steps = steps + 1 ;
            }
            else if(plants[i] > bucket){
                steps = steps+ i;//at river (-1)
                steps = steps + i + 1; //back to plant
                bucket = capacity;
                bucket -= plants[i];
                
        }
            cout<<steps<<" "<<plants[i]<<" "<<bucket<<endl;

        }
        return steps;
    }
};