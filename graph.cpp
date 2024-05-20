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
            sf::CircleShape point(3);
            point.setFillColor(sf::Color::Red);
            point.setPosition(50 + dataPoints[i].x, 550 - dataPoints[i].y);
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
    std::vector<DataPoint> dataPoints = {
        {0, 0}, {50, 100}, {100, 200}, {150, 300}, {200, 400}, {250, 350}, {300, 300}, {350, 250}, {400, 200}, {450, 150}, {500, 100}, {550, 50}, {600, 0}
    };

    drawChart(dataPoints);

    return 0;
}
