class Solution:
    def exclusiveTime(self, n: int, logs: List[str]) -> List[int]:
        function_stack = []
        exclusive_times = [0] * n
        previous_timestamp = 0
        for log_entry in logs:
            function_id, operation, timestamp = log_entry.split(":")
            function_id = int(function_id)
            current_timestamp = int(timestamp)
            if operation == "start":
 
                if function_stack:
                    top_function = function_stack[-1]
                    exclusive_times[top_function] += current_timestamp - previous_timestamp
                function_stack.append(function_id)
                previous_timestamp = current_timestamp
              
            else: 
                ending_function = function_stack.pop()
                exclusive_times[ending_function] += current_timestamp - previous_timestamp + 1
                previous_timestamp = current_timestamp + 1
      
        return exclusive_times