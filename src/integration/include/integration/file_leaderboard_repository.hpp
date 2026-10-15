#pragma once

#include <application/leaderboards/leaderboard_repository.hpp>
#include <vector>
#include <string>

class FileLeaderboardRepository : public LeaderboardRepository
{
public:
    std::vector<std::string> LoadAllLeaderboardMapNames() override;
    std::vector<LeaderboardEntry> LoadMapLeaderboard(const std::string &mapName) override;
};
