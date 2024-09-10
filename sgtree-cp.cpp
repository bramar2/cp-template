#include <bits/stdc++.h>
using namespace std;



class SegmentTree {
public:
	long long size;
	vector<long long> tree;
	explicit SegmentTree(long long n) : size(n), tree(vector<long long>(4*n+1,0)) {}
	explicit SegmentTree(long long n, const long long* v) : size(n),
        tree(vector<long long>(4*n+1,0)) {
        build(v, 1, 0, size-1);
    }
	explicit SegmentTree(long long n, const vector<long long>& v) : size(n),
		tree(vector<long long>(4*n+1,0)) {
		build(v, 1, 0, size-1);
	}
	void build(const long long* nums, long long vertex, long long l, long long r) {
        if(l == r) {
            tree[vertex] = nums[l];
        }else {
            long long mid = l + (r-l)/2;
            build(nums, 2*vertex, l, mid);
            build(nums, 2*vertex+1, mid+1, r);
            // OPC: Change operation here
            tree[vertex] = tree[2*vertex] + tree[2*vertex+1];
        }
    }
	void build(const vector<long long>& nums, long long vertex, long long l, long long r) {
		if(l == r) {
			tree[vertex] = nums[l];
		}else {
			long long mid = l + (r-l)/2;
			build(nums, 2*vertex, l, mid);
			build(nums, 2*vertex+1, mid+1, r);
			// OPC: Change operation here
			tree[vertex] = tree[2*vertex] + tree[2*vertex+1];
		}
	}
	long long query(long long l, long long r) {
		return query_internal(1, 0, size-1, l, r);
	}
	long long query_internal(long long vertex, long long vl, long long vr, long long l, long long r) {
		if(l <= vl && vr <= r) return tree[vertex];
		long long vmid = vl + (vr-vl)/2;
		// OPC: Change operation here
		return query_internal(2*vertex, vl, vmid, l, r) +
			query_internal(2*vertex+1, vmid+1, vr, l, r);
	}
	void update(long long pos, long long val) {
		update_internal(1, 0, size-1, pos, val);
	}
	void update_internal(long long vertex, long long vl, long long vr, long long pos, long long val) {
		if(vl == vr) {
			tree[vertex] = val;
		}else {
			long long vmid = vl + (vr-vl)/2;
			if(pos <= vmid) {
				update_internal(2*vertex, vl, vmid, pos, val);
			}else {
				update_internal(2*vertex+1, vmid+1, vr, pos, val);
			}
			// OPC: Change operation here
			tree[vertex] = tree[2*vertex] + tree[2*vertex+1];
		}
	}
};