class Solution {
public:
    int count=0;
    int minimumOperations(vector<int>& nums) {
       if(nums.size() == 1 ) return 0;
        map<int, int> even_counts; //holds count of each value found in an even position (1-indexed)
        map<int, int> odd_counts; //holds count of each value found in an odd position (1-indexed)
        map<int, vector<int>> even_costs; //re-organizes even values by moves required to make all of the even positions the same with that value -- vector contains values that have the same cost
        map<int, vector<int>> odd_costs; //re-organizes odd values by moves required to make all the odd positions the same with that value -- vector contains values that have the same cost
		
        for(int i = 0; i < nums.size(); i++){ //populate count maps
            if(i % 2 == 1)
                even_counts[nums[i]]++;
            else odd_counts[nums[i]]++;
            }
        
        for(auto it = even_counts.begin(); it != even_counts.end(); it++){ //populate cost maps for even/odd positions
            even_costs[abs((int)(nums.size() / 2) - (int)it->second)].push_back(it->first);
        }
        for(auto it = odd_counts.begin(); it != odd_counts.end(); it++){
            odd_costs[abs((int)((nums.size()+1) /2) - (int)it->second)].push_back(it->first);
        }
		
        auto even_it = even_costs.begin();
        auto odd_it = odd_costs.begin();
        //iterate through cost-value maps, starting from lowest cost values. The if-else work is to account
		//for possibility of finding the same value in both even position and odd position -- check next-highest cost if 
		//the numbers at the current cost levels are the same.
        while(even_it != even_costs.end() && odd_it != odd_costs.end()){ 
            for(int i = 0; i < even_it->second.size(); i++)
                for(int j = 0; j < odd_it->second.size(); j++)
                    if(even_it->second[i] != odd_it->second[j]) return even_it->first + odd_it->first;
            auto temp_1 = even_it;
            auto temp_2 = odd_it;
            temp_1++;
            temp_2++;
            if(temp_1 == even_costs.end())
                odd_it++;
            else if(temp_2 == odd_costs.end())
                even_it++;
            else if(temp_1->first < temp_2->first)
                even_it++;
            else
                odd_it++;
        }
        return nums.size() /2 ;
        
    }
};