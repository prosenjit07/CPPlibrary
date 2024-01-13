def calc(balls):
    figures = {
        "overs": 0,
        "balls": 0,
        "runs": 0,
        "wickets": 0
    }

    for ball in balls:
        if ball == 'W':
            figures["wickets"] += 1
            figures["balls"] += 1
            if figures["wickets"] >= 10:
                break
        else:
            if figures["wickets"] <= 10:
                figures["runs"] += int(ball)
            figures["balls"] += 1

    figures["overs"] = figures["balls"] // 6
    figures["balls"] %= 6

    return figures

def main():
    T = int(input())
    for i in range(T):
        balls = input().strip()
        figures = calc(balls)
        over_str = f"{figures['overs']}.{figures['balls']} Over"
        if figures['overs'] >= 1 and figures['balls'] > 0:
            over_str += "s"
        run_str = f"{figures['runs']} Run"
        if figures['runs'] > 1:
            run_str += "s"
        wicket_str = f"{figures['wickets']} Wicket"
        if figures['wickets'] > 1:
            wicket_str += "s"
        print(f"{over_str} {run_str} {wicket_str}.")

if __name__ == "__main__":
    main()
