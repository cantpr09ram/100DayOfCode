#include <iostream>
#include <string>
using namespace std;

int main() {
	//cin.sync_with_stdio(false), cin.tie(nullptr);
	string timePeriod[4] = { "morning", "afternoon", "night", "early morning" };
	int totalRain, rains[4] = {}, rain, maximumDayRain = -1, maximumTimeRain = -1, maximumAtDay, maximumAtTime, buffer1, buffer2;
	for (int i = 1; i <= 7; ++i) {
		totalRain = 0;
		for (int j = 0; j < 4; ++j) {
			scanf("%d.%d", &buffer1, &buffer2), rain = buffer1 * 10 + buffer2;
			totalRain += rain, rains[j] += rain;
		}
		if (totalRain > maximumDayRain)
			maximumDayRain = totalRain, maximumAtDay = i;
	}
	for (int i = 0; i < 4; ++i)
		if (rains[i] > maximumTimeRain)
			maximumTimeRain = rains[i], maximumAtTime = i;
	cout << maximumAtDay << '\n' << timePeriod[maximumAtTime] << '\n';
}