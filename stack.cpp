// Copyright 2018 Daiki Yoshida. All rights reserved.
//
// This file is part of DFS-Library.
//
// DFS-Library is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// DFS-Library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without event the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with DFS-Library. If not, see <http://www.gnu.org/licenses/>.

// standard library
#include <iterator>
#include <utility>

// header
#include "stack.h"

// using
using namespace std;

const T dfs_lib::stack<T>::pop()
{
	const T data{*(end(datas) - 1)};
	datas.pop_back();
	return data;
}

void dfs_lib::stack<T>::swap(stack& s)
{
	using std::swap;
	swap(datas, s.datas);
}
