import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int busStation_row = scanner.nextInt();
        int busStation_col = scanner.nextInt();

        int[][] busStations = new int[busStation_row][busStation_col];

        for (int i = 0; i < busStation_row; i++) {
            for (int j = 0; j < busStation_col; j++) {
                busStations[i][j] = scanner.nextInt();
            }
        }

        int result = findRemainingBuses(busStation_row, busStation_col, busStations);
        System.out.println(result);
    }

    public static int findRemainingBuses(int busStation_row, int busStation_col, int[][] busStations) {
        // Step 2: Create a list to store the starting and ending positions of each
        // bus's route.
        List<int[]> routes = new ArrayList<>();

        // Step 3: Sort the list based on the starting positions of the routes.
        Arrays.sort(busStations, (a, b) -> Integer.compare(a[0], b[0]));

        // Step 4: Traverse the sorted list and merge overlapping routes.
        for (int i = 1; i < busStation_row; i++) {
            if (busStations[i][0] <= busStations[i - 1][1]) { // Check for overlapping routes
                busStations[i][0] = busStations[i - 1][0]; // Merge starting positions
                busStations[i][1] = Math.max(busStations[i][1], busStations[i - 1][1]); // Merge ending positions
            } else {
                routes.add(busStations[i - 1]); // Add the non-overlapping route
            }
        }

        // Add the last route after the loop ends
        routes.add(busStations[busStation_row - 1]);

        // Step 5: Count the remaining number of buses
        return routes.size();
    }
}