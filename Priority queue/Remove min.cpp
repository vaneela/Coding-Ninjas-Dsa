#include <vector>

class PriorityQueue {
    vector<int> pq;

   public:
    bool isEmpty() { 
        return pq.size() == 0; 
    }

    int getSize() { 
        return pq.size(); 
    }

    int getMin() {
        if (isEmpty()) {
            return 0;
        }

        return pq[0];
    }

    void insert(int element) {
        pq.push_back(element);

        int childIndex = pq.size() - 1;

        while (childIndex > 0) {
            int parentIndex = (childIndex - 1) / 2;

            if (pq[childIndex] < pq[parentIndex]) {
                int temp = pq[childIndex];
                pq[childIndex] = pq[parentIndex];
                pq[parentIndex] = temp;
            } else {
                break;
            }

            childIndex = parentIndex;
        }
    }

    int removeMin() {
        // Write your code here
        int ans = pq[0];
        pq[0] = pq[pq.size()-1];
        pq.pop_back();
        int p = 0;
        while(p< pq.size()){
            int lc = p*2+1;
            int rc = p*2+2;
            int mini;
            if(lc < pq.size() && rc < pq.size()){
                if(pq[lc] < pq[rc])
                    mini = lc;
                else
                    mini = rc;
            }else if(lc < pq.size())
                mini = lc;
            else
                mini = rc;
            if(mini==p)
                break;
            if(mini >= pq.size())
                break;
            swap(pq[p] , pq[mini]);
            p = mini;
        }
        return ans;
    }
};