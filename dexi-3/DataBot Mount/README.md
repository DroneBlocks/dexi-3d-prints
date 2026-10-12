# DEXI 3 DataBot Mount

Mounts for a **databot 2.0** (42.5 × 42.5 × 20 mm, 34 g) on the DEXI 3. Two options:

| Option | Where | Sensors face | Needs | Added mass* |
|---|---|---|---|---|
| **Belly Mount** — best balance | under the bottom plate, centred on the centre of gravity | down (height above ground, ground colour) | the **1.25 in landing gear** (stock gear leaves 3.8 mm too little room) + 4 screws | ≈ 58 g incl. gear |
| **Forward Facing Mount** — *concept, less developed* | front of the top plate, above the Pi camera | forward (wall/obstacle distance, forward light) | 2 × M2×10 replacing the two front top-plate M2×8 screws | ≈ 47 g, shifts balance ~9–10 mm forward |

\*DataBot + printed parts (+ gear change for the Belly Mount), from slicer masses — not weighed.

![Belly Mount](render-belly-mount.png)
![Forward Facing Mount](render-forward-facing-mount.png)

## Status

**CAD-checked only — not yet printed, fit-tested or flown.** The Forward Facing Mount is less developed: its latch bends across print layers and needs a strain test print before use. Checked in CAD against the DEXI 3 V2 frame plates,
Battery Mount V3 and Landing Gear .5 in V2: no interference with any part, nothing in the propeller zone, and nothing
blocking the Pi camera, the flow sensor or the DataBot's sensor openings. Please report fit and print results on #27.

## Files

| File | Part |
|---|---|
| `DEXI 3 DataBot Belly Mount.step` / `.stl` | Belly Mount (4 inner-standoff screws) |
| `DEXI 3 Landing Gear 1.25 inches.step` / `.stl` | Taller gear for the Belly Mount — print **4**; same screw holes as the .5 in gear |
| `DEXI 3 DataBot Forward Facing Mount.step` / `.stl` | Forward Facing Mount (front top-plate screws) — concept level |

STLs are already in print orientation.

## How the DataBot is held

The DataBot slides into a drawer: rails grip the flat rim of its lid on the two straight sides and one printed-flat
flexure latch clicks behind it. Press the latch tab and slide it out. Lid openings, side vents, USB port and power
switch stay uncovered. **Logging without a phone:** switch the DataBot on face-down (Server/Wi-Fi logging mode), then slide it in.

## Printing (Bambu P2S, 0.4 mm nozzle)

| Part | Material | Settings | Supports |
|---|---|---|---|
| Belly Mount | PETG HF | 0.20 mm, **Arachne** walls, 4 walls, 5 top / 4 bottom, 30 % gyroid, Textured PEI | paint supports **only under the two side rails**; keep the latch gaps clear |
| Forward Facing Mount | PETG HF | same; prints mouth-up | tree, build plate only |
| Landing gear 1.25 in (×4) | TPU for AMS | 2 walls, 3 walls between 3.8–13 mm height, 15 % infill | none |

## Hardware

**Forward Facing Mount:** 2 × M2×10 socket head replacing the two front top-plate M2×8 screws.

### Belly Mount

Replaces the 4 inner-standoff **bottom** M2×8 screws, one at a time (never loosen the top screws):
- 2 × **M2×10 countersunk, 90° (DIN 7991)** — the two screws on the drone's right side, 0.05 N·m, seat hand-reamed with a 90° countersink
- 2 × **M2×10 socket head (ISO 4762)** + 2 × **M2 flat washer (ISO 7089, 2.2 × 5 × 0.3)** — left side, 0.08 N·m
- Medium (blue) threadlocker on the screw tips only, never on the plastic

Landing gear reuses its stock screws.

## Testing without a DataBot

The fit can be checked with a printed stand-in case made from the databot enclosure STEP files (same outer shape;
add ~34 g if checking balance). Retention, latch feel, clearance on the drone and the gear drop test do not need a real DataBot.
