#include <fstream>      // ifstream, ofstream
#include <iostream>     // cout
#include <sstream>      // stringstream
#include <string>       // string, getline
#include <string_view>  // string_view
#include <random>       // mt19937_64, random_device
#include <chrono>       // system_clock

using namespace std;

// абсолютный путь до набора данных
static constexpr auto kDatasetTopologicalSort = string_view{};

int main() {
  const auto pathToTopologicalSort = string(kDatasetTopologicalSort);
  cout << "Dataset path To Data TopologicalSort: " << pathToTopologicalSort << endl;

  vector<string> output_streams;
  output_streams.emplace_back("/100.csv");
  output_streams.emplace_back("/500.csv");
  output_streams.emplace_back("/1000.csv");
  output_streams.emplace_back("/5000.csv");
  output_streams.emplace_back("/10000.csv");
  output_streams.emplace_back("/50000.csv");
  output_streams.emplace_back("/100000.csv");
  output_streams.emplace_back("/500000.csv");
  output_streams.emplace_back("/1000000.csv");

  vector<int> integers = {100, 500, 1000, 5000, 10000, 50000, 100000, 500000, 1000000};

  while (!integers.empty()) {
    auto outputStreamTopologicalSort01 =
        ofstream(pathToTopologicalSort + "/01" + output_streams.front(), ios::ios_base::trunc);
    auto outputStreamTopologicalSort02 =
        ofstream(pathToTopologicalSort + "/02" + output_streams.front(), ios::ios_base::trunc);
    auto outputStreamTopologicalSort03 =
        ofstream(pathToTopologicalSort + "/03" + output_streams.front(), ios::ios_base::trunc);
    auto outputStreamTopologicalSort04 =
        ofstream(pathToTopologicalSort + "/04" + output_streams.front(), ios::ios_base::trunc);
    auto outputStreamTopologicalSort05 =
        ofstream(pathToTopologicalSort + "/05" + output_streams.front(), ios::ios_base::trunc);
    auto outputStreamTopologicalSort06 =
        ofstream(pathToTopologicalSort + "/06" + output_streams.front(), ios::ios_base::trunc);
    auto outputStreamTopologicalSort07 =
        ofstream(pathToTopologicalSort + "/07" + output_streams.front(), ios::ios_base::trunc);
    auto outputStreamTopologicalSort08 =
        ofstream(pathToTopologicalSort + "/08" + output_streams.front(), ios::ios_base::trunc);
    auto outputStreamTopologicalSort09 =
        ofstream(pathToTopologicalSort + "/09" + output_streams.front(), ios::ios_base::trunc);
    auto outputStreamTopologicalSort10 =
        ofstream(pathToTopologicalSort + "/10" + output_streams.front(), ios::ios_base::trunc);

    const auto seed = chrono::system_clock::now().time_since_epoch().count();
    auto engine = mt19937(seed);  // без seed`а генератор будет выдавать одни и те же значения
    auto dist = uniform_int_distribution(0, 10000000);  // равновероятное распределение генерируемых чисел

    if (outputStreamTopologicalSort01) {
      for (int counter = 0; counter < integers.front() - 1; counter++) {
        outputStreamTopologicalSort01 <<

            dist(engine) << ',';
      }
      outputStreamTopologicalSort01 << dist(engine) << '\n';
    }

    if (outputStreamTopologicalSort02) {
      for (int counter = 0; counter < integers.front() - 1; counter++) {
        outputStreamTopologicalSort02 << dist(engine) << ',';
      }
      outputStreamTopologicalSort02 << dist(engine) << '\n';
    }

    if (outputStreamTopologicalSort03) {
      for (int counter = 0; counter < integers.front() - 1; counter++) {
        outputStreamTopologicalSort03 << dist(engine) << ',';
      }
      outputStreamTopologicalSort03 << dist(engine) << '\n';
    }

    if (outputStreamTopologicalSort04) {
      for (int counter = 0; counter < integers.front() - 1; counter++) {
        outputStreamTopologicalSort04 << dist(engine) << ',';
      }
      outputStreamTopologicalSort04 << dist(engine) << '\n';
    }

    if (outputStreamTopologicalSort05) {
      for (int counter = 0; counter < integers.front() - 1; counter++) {
        outputStreamTopologicalSort05 << dist(engine) << ',';
      }
      outputStreamTopologicalSort05 << dist(engine) << '\n';
    }

    if (outputStreamTopologicalSort06) {
      for (int counter = 0; counter < integers.front() - 1; counter++) {
        outputStreamTopologicalSort06 << dist(engine) << ',';
      }
      outputStreamTopologicalSort06 << dist(engine) << '\n';
    }

    if (outputStreamTopologicalSort07) {
      for (int counter = 0; counter < integers.front() - 1; counter++) {
        outputStreamTopologicalSort07 << dist(engine) << ',';
      }
      outputStreamTopologicalSort07 << dist(engine) << '\n';
    }

    if (outputStreamTopologicalSort08) {
      for (int counter = 0; counter < integers.front() - 1; counter++) {
        outputStreamTopologicalSort08 << dist(engine) << ',';
      }
      outputStreamTopologicalSort08 << dist(engine) << '\n';
    }

    if (outputStreamTopologicalSort09) {
      for (int counter = 0; counter < integers.front() - 1; counter++) {
        outputStreamTopologicalSort09 << dist(engine) << ',';
      }
      outputStreamTopologicalSort09 << dist(engine) << '\n';
    }

    if (outputStreamTopologicalSort10) {
      for (int counter = 0; counter < integers.front() - 1; counter++) {
        outputStreamTopologicalSort10 << dist(engine) << ',';
      }
      outputStreamTopologicalSort10 << dist(engine) << '\n';
    }

    integers.erase(integers.begin());
    output_streams.erase(output_streams.begin());
  }

  return 0;
}