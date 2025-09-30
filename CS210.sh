#!/bin/bash

SESSION_NAME="CS210"

# Check if the session already exists
if tmux has-session -t $SESSION_NAME 2>/dev/null; then
  echo "Session $SESSION_NAME already exists. Attaching to it."
  tmux attach-session -t $SESSION_NAME
else
  # Create a new session and name it
  tmux new-session -d -s $SESSION_NAME

  #rename window
  #tmux rename-window -t CS210 main

  # Split the window horizontally
  tmux split-window -v -t $SESSION_NAME

  # Send a command to the first pane to open lvim
  tmux send-keys -t 0 'lvim .' C-m

  # resize top pane to be larger (move split down 15 units)
  tmux resize-pane -t 0 -D 15

  # Send a command to the second pane
  #tmux send-keys -t 1 'echo "Hello from pane 2"' C-m

  #Select top pane
  tmux select-pane -t 0

  # Attach to the created session
  tmux attach-session -t $SESSION_NAME
fi
