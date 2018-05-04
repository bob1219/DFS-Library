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

#ifndef DFS_LIBRARY_STACK_H
#define DFS_LIBRARY_STACK_H

// standard library
#include <deque>

namespace dfs_lib
{
	template<typename T>
	class stack
	{
	private:
		std::deque<T> datas;

	public:
		stack() = default;
		stack(const stack&) = default;
		stack(stack&&) = default;

		stack& operator=(const stack&) = default;
		stack& operator=(stack&&) = default;

		void push(const T& data) { datas.push_back(data); }
		const T pop();
		auto empty() { return datas.empty(); }
		auto size() { return datas.size(); }
		void swap(stack& s);
	};

	void swap(stack& left, stack& right) { left.swap(right); }
}
