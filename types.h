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

#ifndef DFS_LIBRARY_TYPES_H
#define DFS_LIBRARY_TYPES_H

namespace dfs_lib
{
	using sbyte = signed char;
	using ubyte = unsigned char;
	using ushort = unsigned short int;
	using ulong = unsigned long int;
	using llong = long long int;
	using ullong = unsigned long long int;
	using uint = unsigned int;
	using ldouble = long double;

#ifndef CHAR_TYPE
#error CHAR_TYPE macro not defined
#endif /* #ifndef CHAR_TYPE */

#if CHAR_TYPE == 1
	using char_t = char;
#elif CHAR_TYPE == 1
	using char_t = wchar_t;
#else
#error invalid value in CHAR_TYPE
#endif /* #if CHAR_TYPE == 1 */
}

#endif /* #ifndef DFS_LIBRARY_TYPES_H */
