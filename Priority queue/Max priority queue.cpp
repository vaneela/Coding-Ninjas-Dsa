#include <vector>
class PriorityQueue
{
    // Declare the data members here
    vector<int> pq;

public:
    PriorityQueue()
    {
        // Implement the constructor here
    }

    /**************** Implement all the public functions here ***************/

    void insert(int element)
    {
        // Implement the insert() function here.
        pq.push_back(element);
        int c = pq.size() - 1;
        int p;
        while (c > 0)
        {
            p = (c - 1) / 2;
            if (p < 0)
                break;
            if (pq[p] < pq[c])
            {
                swap(pq[p], pq[c]);
                c = p;
            }
            else
                break;
        }
    }

    int getMax()
    {
        // Implement the getMax() function here
        return pq[0];
    }

    int removeMax()
    {
        // Implement the removeMax() function here
        int ans = pq[0];
        pq[0] = pq[pq.size() - 1];
        pq.pop_back();
        int p = 0;
        while (p < pq.size())
        {
            int lc = 2 * p + 1;
            int rc = 2 * p + 2;
            int mx = p;
            if (lc and rc < pq.size())
            {
                if (pq[lc] > pq[rc])
                    mx = lc;
                else
                    mx = rc;
            }
            else if (lc < pq.size())
                mx = lc;
            else if (rc < pq.size())
                mx = rc;

            if (mx == p)
                break;
            if (pq[p] < pq[mx])
            {
                swap(pq[p], pq[mx]);
                p = mx;
            }
            else
                break;
        }
        return ans;
    }

    int getSize()
    {
        // Implement the getSize() function here
        return pq.size();
    }

    bool isEmpty()
    {
        // Implement the isEmpty() function here
        return pq.size() == 0;
    }
};