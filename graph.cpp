#include <SFML/Graphics.hpp>
#include <vector>
#include <iostream>

struct DataPoint {
    float x;
    float y;
};

void drawChart(const std::vector<DataPoint>& dataPoints) {
    sf::RenderWindow window(sf::VideoMode(800, 600), "Line Chart");

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear(sf::Color::White);

        // Draw axes
        sf::Vertex xAxis[] = {
            sf::Vertex(sf::Vector2f(50, 550)),
            sf::Vertex(sf::Vector2f(750, 550))
        };
        sf::Vertex yAxis[] = {
            sf::Vertex(sf::Vector2f(50, 550)),
            sf::Vertex(sf::Vector2f(50, 50))
        };
        window.draw(xAxis, 2, sf::Lines);
        window.draw(yAxis, 2, sf::Lines);

                // Draw data points and lines
        for (size_t i = 0; i < dataPoints.size(); ++i) {
            sf::CircleShape point(3); // dot with a radius of 3 pixels. 
            point.setFillColor(sf::Color::Red); // color of dot. 
            point.setPosition(60 + dataPoints[i].x, 550 - dataPoints[i].y);
            window.draw(point);

            if (i > 0) {
                sf::Vertex line[] = {
                    sf::Vertex(sf::Vector2f(50 + dataPoints[i-1].x, 550 - dataPoints[i-1].y), sf::Color::Blue),
                    sf::Vertex(sf::Vector2f(50 + dataPoints[i].x, 550 - dataPoints[i].y), sf::Color::Blue)
                };
                window.draw(line, 2, sf::Lines);
            }
        }

        window.display();
    }
}

int main() {
    std::vector<DataPoint> dataPoints;
    DataPoint dp;

    dp.x = 0; dp.y = 0;
    dataPoints.push_back(dp);

    dp.x = 50; dp.y = 100;
    dataPoints.push_back(dp);

    dp.x = 100; dp.y = 200;
    dataPoints.push_back(dp);

    dp.x = 150; dp.y = 300;
    dataPoints.push_back(dp);

    dp.x = 200; dp.y = 400;
    dataPoints.push_back(dp);

    dp.x = 250; dp.y = 350;
    dataPoints.push_back(dp);

    dp.x = 300; dp.y = 300;
    dataPoints.push_back(dp);

    dp.x = 350; dp.y = 250;
    dataPoints.push_back(dp);

    dp.x = 400; dp.y = 200;
    dataPoints.push_back(dp);

    dp.x = 450; dp.y = 150;
    dataPoints.push_back(dp);

    dp.x = 500; dp.y = 100;
    dataPoints.push_back(dp);

    dp.x = 550; dp.y = 50;
    dataPoints.push_back(dp);

    dp.x = 600; dp.y = 0;
    dataPoints.push_back(dp);

    drawChart(dataPoints);

    return 0;
}

