class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        int n=encoded.size();
        vector<int> vtk;
        vtk.push_back(first);
        for(int i=0;i<encoded.size();i++)
        {
            vtk.push_back(vtk[i]^encoded[i]);
        }
        return vtk;
        
    }
};