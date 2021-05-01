#include <iostream>
#include "SortingAlgorithm.h"

using namespace std;

void print_list(int* arr, int size);
int main()
{

	int list[300] = {
221,
58,
123,
289,
4,
224,
30,
180,
295,
113,
128,
296,
111,
75,
37,
63,
151,
272,
294,
161,
5,
267,
114,
219,
217,
147,
103,
3,
117,
119,
218,
260,
194,
48,
190,
172,
241,
213,
167,
6,
176,
256,
148,
17,
208,
1,
79,
188,
184,
196,
200,
122,
2,
101,
130,
53,
54,
255,
195,
209,
268,
142,
228,
240,
49,
132,
189,
235,
286,
252,
291,
191,
0,
279,
84,
135,
207,
94,
136,
97,
156,
66,
47,
297,
234,
55,
229,
163,
243,
247,
60,
15,
145,
248,
57,
32,
80,
138,
26,
153,
137,
264,
90,
179,
139,
61,
160,
68,
65,
236,
98,
20,
232,
28,
109,
225,
10,
239,
91,
214,
206,
43,
129,
88,
81,
140,
152,
263,
249,
36,
203,
73,
45,
110,
226,
42,
181,
150,
46,
134,
211,
192,
40,
93,
162,
259,
281,
85,
244,
41,
124,
77,
107,
72,
131,
299,
199,
269,
292,
143,
230,
282,
144,
158,
100,
92,
74,
205,
170,
280,
108,
18,
274,
141,
273,
257,
262,
220,
169,
34,
275,
242,
27,
186,
125,
204,
127,
96,
227,
102,
56,
62,
283,
44,
126,
105,
284,
106,
166,
51,
83,
76,
95,
254,
159,
253,
185,
115,
67,
14,
8,
245,
133,
99,
246,
231,
187,
202,
237,
278,
24,
270,
277,
173,
19,
215,
69,
146,
121,
276,
157,
178,
86,
174,
7,
16,
183,
23,
290,
22,
164,
210,
31,
38,
212,
182,
64,
87,
177,
266,
223,
39,
13,
201,
233,
171,
154,
155,
251,
271,
50,
25,
287,
258,
35,
118,
70,
89,
293,
222,
168,
193,
12,
11,
265,
216,
112,
29,
52,
120
	};
	SidSort(list, 300);
	print_list(list, 300);
	std::cin.get();
	return 0;
}

void print_list(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}