const float MGW_SCORES[1024] = {3.38,3.68,4.05,3.63,4.02,4.05,4.03,3.35,4.65,4.43,4.06,3.85,3.79,3.84,4.12,2.85,4.8,4.68,4.65,3.9,4.31,4.42,4.51,3.75,4.61,4.63,4.17,4.14,4.03,4.14,3.74,3.34,4.97,4.95,5.05,4.3,4.8,4.62,4.64,4.21,4.33,4.36,4.03,3.64,4.24,4.49,3.95,3.34,5.53,4.65,5.3,4.8,4.46,5.08,4.89,4.27,4.46,4.56,4.19,3.75,4.36,4.24,3.75,2.85,4.74,4.5,4.85,4.43,5,4.97,5.04,4.86,4.99,4.83,4.73,4.57,4.72,4.66,4.36,3.75,4.76,4.63,4.81,4.51,4.68,4.62,4.73,4.29,4.82,4.77,4.72,4.33,4.33,4.42,4.18,3.64,5.08,5.16,5.43,5.23,5.19,5.15,5.18,4.86,4.53,4.83,4.61,4.33,4.88,4.8,4.63,4.14,5.37,5.2,5.54,5.37,5.22,5.31,5.3,5.1,4.89,4.59,4.51,4.57,4.67,4.38,4.25,3.85,5.21,5.19,5.58,5.03,5.33,5.29,5.31,5.2,5.5,5.47,5.31,5.1,5.14,4.99,4.82,4.27,5.21,5.13,5.34,4.8,5.06,4.92,5.08,4.73,5.27,5.2,5.08,4.86,4.84,4.85,4.7,4.21,5.08,5.19,5.38,4.97,5.02,5.16,5.08,4.73,4.66,4.7,4.58,4.29,4.68,4.54,4.37,3.75,5.73,5.13,5.62,4.86,5.48,5.32,5.4,5.2,4.89,4.93,4.73,4.86,4.48,4.52,4.31,3.35,5.66,5.48,5.62,5.28,5.69,5.6,5.37,4.86,5.82,5.53,5.46,5.37,5.76,5.32,5.4,4.8,5.5,5.23,5.45,4.79,5.34,5.19,5.23,4.97,5.55,5.6,5.33,5.23,5.27,5.15,5.02,4.3,5.52,5.34,5.35,4.79,5.23,5.25,5.28,4.8,4.94,4.47,4.81,4.51,4.74,4.98,4.74,3.9,5.58,5.57,5.44,5.28,5.46,5.3,5.15,5.03,5.22,4.88,4.69,4.43,4.75,4.12,4.27,3.63,4.35,4.36,4.74,4.27,4.52,4.63,4.82,4.31,4.85,4.74,4.46,4.25,4.51,4.39,4.36,3.75,4.67,4.93,5.04,4.74,4.8,4.78,4.85,4.37,5.1,5.02,4.67,4.63,4.69,4.78,4.53,3.95,5.57,5.26,5.49,5.02,5.16,5.1,5.09,4.7,4.84,4.69,4.45,4.18,5.08,5,4.53,3.74,5.89,5.54,5.65,5.4,5.08,5.53,5.38,4.82,4.77,4.96,4.63,4.36,4.81,4.81,4.36,4.12,4.63,4.63,4.84,4.69,4.92,4.93,5.05,4.73,5.02,5.02,4.8,4.51,4.98,4.84,4.63,4.19,4.73,4.85,4.9,4.81,4.76,4.75,4.82,4.58,5.02,4.96,4.77,4.61,4.71,4.77,4.45,4.03,5.3,5.41,5.66,5.33,5.4,5.29,5.41,5.08,4.93,4.96,4.77,4.72,5,4.95,4.67,4.17,5.43,5.55,5.84,5.46,5.4,5.56,5.56,5.31,4.94,4.82,4.8,4.73,4.87,4.82,4.46,4.06,5.41,5.45,5.7,5.15,5.75,5.52,5.67,5.4,5.94,5.74,5.56,5.3,5.76,5.5,5.38,4.89,5.53,5.46,5.56,5.28,5.27,5.3,5.37,5.08,5.71,5.54,5.41,5.18,5.32,5.25,5.09,4.64,5.56,5.43,5.46,5.23,5.43,5.36,5.37,5.08,4.96,4.95,4.82,4.73,4.97,4.94,4.85,4.51,5.82,5.67,5.88,5.37,5.74,5.53,5.67,5.31,5.4,5.2,5.05,5.04,5.01,4.94,4.82,4.03,5.91,5.62,5.86,5.44,5.76,5.76,5.88,5.62,6.2,5.93,5.84,5.54,6.01,5.93,5.65,5.3,5.94,5.8,6.01,5.35,5.58,5.41,5.46,5.38,5.94,5.88,5.66,5.43,5.74,5.73,5.49,5.05,5.91,5.67,6.01,5.45,5.64,5.54,5.56,5.34,5.19,5.08,4.9,4.81,5.32,5.22,5.04,4.65,5.85,5.8,5.86,5.62,5.65,5.42,5.7,5.58,5.35,5.1,4.84,4.85,5.1,4.95,4.74,4.05,4.76,4.52,4.95,4.12,4.92,4.65,4.94,4.52,5.24,4.98,4.82,4.38,5.02,4.69,4.81,4.24,5.14,5.14,5.22,4.98,4.92,4.85,4.94,4.54,5.27,5.13,4.95,4.8,5.13,4.98,5,4.49,5.2,5.32,5.73,5.15,5.29,5.1,5.25,4.85,4.84,4.92,4.77,4.42,5.11,4.98,4.78,4.14,6.02,5.53,5.93,5.32,5.27,5.34,5.5,4.99,5.22,4.94,4.84,4.66,4.9,4.69,4.39,3.84,4.98,4.92,5.1,4.88,5.17,5.18,5.2,4.93,5.28,5.19,4.82,4.59,5.32,4.94,4.96,4.56,5.09,5.01,5.08,4.47,4.95,4.94,4.95,4.7,5.17,5.09,4.96,4.83,4.96,4.92,4.69,4.36,5.81,5.67,5.88,5.6,5.42,5.51,5.54,5.2,5.06,5.09,4.96,4.77,5.22,5.13,5.02,4.63,6.11,5.77,5.93,5.53,5.71,5.64,5.74,5.47,5.39,5.19,5.02,4.83,5.15,4.98,4.74,4.43,5.42,5.31,5.42,5.3,5.56,5.4,5.53,5.32,5.8,5.64,5.56,5.31,5.88,5.34,5.53,5.08,5.38,5.65,5.54,5.25,5.39,5.19,5.36,5.16,5.59,5.51,5.29,5.15,5.33,5.1,5.1,4.62,5.44,5.39,5.41,5.19,5.22,5.19,5.3,4.92,4.89,4.94,4.75,4.62,4.99,4.85,4.78,4.42,5.96,5.69,5.76,5.6,5.47,5.4,5.52,5.29,5.3,5.18,4.93,4.97,4.81,4.65,4.63,4.05,5.82,5.49,5.8,5.57,5.84,5.69,5.67,5.13,5.74,5.77,5.55,5.2,5.79,5.53,5.54,4.65,5.93,5.56,5.67,5.34,5.31,5.39,5.43,5.19,5.79,5.67,5.41,5.16,5.41,5.32,5.26,4.95,5.9,5.56,5.8,5.23,5.42,5.65,5.46,5.13,5.02,5.01,4.85,4.63,5.41,5.14,4.93,4.68,5.58,5.49,5.62,5.48,5.4,5.31,5.45,5.19,5.15,4.92,4.63,4.5,4.7,4.52,4.36,3.68,4.89,4.7,5.1,4.75,4.93,4.81,5.01,4.48,5.17,5.15,4.87,4.67,5.11,4.9,4.81,4.36,5.33,5.41,5.32,4.74,4.98,4.99,4.97,4.68,5.36,5.22,5,4.88,5.33,5.11,5.08,4.24,5.89,5.41,5.74,5.27,5.61,5.33,5.32,4.84,5.13,4.96,4.71,4.33,5.33,5.13,4.69,4.03,6.07,5.79,6.01,5.76,5.84,5.88,5.76,5.14,5.38,5.32,4.98,4.72,5.11,5.02,4.51,3.79,5.4,5.15,5.35,5.22,5.29,5.3,5.4,4.89,5.43,5.39,4.94,4.89,5.38,5.22,4.77,4.46,4.97,5.02,5.19,4.94,4.93,4.89,4.96,4.66,5.24,5.06,4.93,4.53,5.13,4.84,4.84,4.33,5.78,5.79,5.94,5.55,5.68,5.59,5.71,5.27,5.24,5.17,5.02,4.82,5.36,5.27,5.1,4.61,5.99,5.74,6.2,5.82,5.84,5.8,5.94,5.5,5.43,5.28,5.02,4.99,5.17,5.24,4.85,4.65,5.6,5.4,5.65,5.46,5.47,5.47,5.74,5.48,5.84,5.71,5.4,5.22,5.84,5.27,5.08,4.46,5.75,5.42,5.64,5.23,5.36,5.22,5.43,5.02,5.68,5.42,5.4,5.19,5.61,5.29,5.16,4.8,5.42,5.31,5.58,5.34,5.36,5.39,5.27,5.06,4.93,4.95,4.76,4.68,4.98,4.92,4.8,4.31,6,5.84,5.76,5.69,5.47,5.56,5.75,5.33,5.29,5.17,4.92,5,4.93,4.92,4.52,4.02,5.73,5.58,5.85,5.58,6,5.96,5.82,5.73,5.99,6.11,5.43,5.37,6.07,6.02,5.89,5.53,6,5.9,5.91,5.52,5.42,5.44,5.56,5.08,5.78,5.81,5.3,5.08,5.89,5.2,5.57,4.97,6,5.93,5.94,5.5,5.75,5.38,5.53,5.21,4.97,5.09,4.73,4.76,5.33,5.14,4.67,4.8,5.73,5.82,5.91,5.66,5.6,5.42,5.41,5.21,5.4,4.98,4.63,4.74,4.89,4.76,4.35,3.38};
const float PROT_SCORES[1024] = {-16.51,-14.68,-14.47,-14.89,-10.71,-9.21,-10.58,-11.68,-13.05,-13.15,-12.41,-12.78,-12.63,-11.76,-12.27,-14.95,-3.46,-3.22,-3.82,-3.55,-1.33,-0.14,-1.5,-1.48,-1.47,-1.91,-1.55,-1.56,-4.26,-4.48,-4.07,-6.26,-10.17,-9.26,-9.4,-10.22,-9.62,-10.04,-9.91,-10.39,-8.86,-7.97,-7.68,-8.15,-6.07,-5.42,-5.23,-6.26,-9.65,-11.61,-10.45,-10.43,-9.02,-8.98,-9.59,-10.82,-9.91,-9.51,-9.67,-10.31,-12.2,-11.93,-11.18,-14.95,-10.55,-10.3,-10.59,-10.15,-6.62,-6.38,-6.5,-7.83,-8.49,-8.81,-8.04,-7.81,-8.23,-7.85,-8.23,-10.31,-4.88,-4.81,-5.39,-5.29,-1.76,-1.32,-1.88,-2.62,-2.38,-2.82,-2.2,-2.34,-5.43,-6.64,-5.67,-8.15,-3.36,-3.6,-3.79,-3.68,-3.56,-3.78,-3.87,-3.93,-2.76,-3.04,-2.48,-2.34,-1.3,-1.38,-0.83,-1.56,-7.55,-8.16,-8.16,-8.21,-7.1,-7.4,-7.68,-8.48,-8.11,-8.15,-7.34,-7.81,-10.74,-11.29,-10.45,-12.78,-12.03,-10.72,-11.7,-11.94,-7,-6.78,-7.34,-8.12,-9.33,-9.43,-8.57,-8.48,-8.52,-10.15,-8.65,-10.82,-6.66,-6.5,-6.61,-6.85,-3.36,-2.81,-3.97,-4.79,-4.25,-4.73,-3.63,-3.93,-7.92,-8.78,-7.92,-10.39,-4.69,-4.44,-5,-4.33,-4.29,-5.03,-4.55,-4.79,-3.38,-3.53,-2.37,-2.62,-1.54,-1.68,-0.88,-1.48,-8.1,-7.44,-8.16,-8.26,-7.1,-7.24,-7.79,-8.12,-7.5,-7.78,-6.75,-7.83,-9.96,-10.21,-8.83,-11.68,-12.37,-10.54,-10.51,-11.27,-7.03,-6.87,-6.84,-8.26,-8.93,-9.05,-8.36,-8.21,-8.95,-8.33,-8.3,-10.43,-6.07,-6.05,-6.37,-6.15,-3.37,-2.37,-3.12,-4.33,-3.73,-4.03,-3.12,-3.68,-7.4,-8.83,-7.1,-10.22,-7.12,-6.55,-6.53,-6.15,-7.08,-7.15,-6.96,-6.85,-5.7,-4.49,-4.91,-5.29,-3.2,-2.7,-2.78,-3.55,-11.32,-11.58,-11.34,-11.27,-10.92,-10.72,-10.6,-11.94,-10.83,-10.56,-9.61,-10.15,-13.87,-13.36,-12.09,-14.89,-13.16,-11.93,-12.76,-12.09,-8.18,-7.38,-8.01,-8.83,-10.91,-11.06,-10.08,-10.45,-10.01,-9.43,-9.46,-11.18,-2.4,-2.54,-3.46,-2.78,-0.44,-0.03,-0.7,-0.88,-0.94,-1.32,-0.53,-0.83,-3.05,-3.31,-3.11,-5.23,-7.48,-6.88,-7.25,-7.1,-7.11,-7.15,-7.38,-7.92,-6.17,-5.99,-5.33,-5.67,-3.9,-3.96,-3.11,-4.07,-7.66,-8.88,-8.06,-8.3,-7.37,-7.48,-7.6,-8.65,-7.81,-7.79,-7.56,-8.23,-10.25,-10.33,-9.46,-12.27,-10.09,-9.44,-9.91,-9.61,-6.1,-5.75,-6.07,-6.75,-7.71,-8.11,-7.55,-7.34,-7.47,-7.65,-7.56,-9.67,-4.39,-4.6,-5.28,-4.91,-1.44,-1.03,-2.13,-2.37,-2.52,-2.89,-1.93,-2.48,-5.01,-5.89,-5.33,-7.68,-3.14,-3.2,-3.41,-3.12,-2.99,-3.13,-3.39,-3.63,-2.54,-2.72,-1.93,-2.2,-1.22,-1.2,-0.53,-1.55,-7.21,-8.07,-8.12,-8.36,-7.04,-7.11,-7.89,-8.57,-7.96,-8.09,-7.55,-8.04,-10.83,-4.14,-10.08,-12.41,-10.88,-9.9,-10.75,-10.6,-6.69,-5.92,-6.76,-7.79,-8.3,-8.4,-7.89,-7.68,-8.11,-9.43,-7.6,-9.59,-6.08,-6.31,-6.9,-6.96,-3.15,-2.75,-3.73,-4.55,-3.94,-4.22,-3.39,-3.87,-7.22,-7.98,-7.38,-9.91,-3.85,-3.34,-4.03,-3.12,-3.4,-3.58,-3.73,-3.97,-2.77,-2.73,-2.13,-1.88,-1.23,-1.28,-0.7,-1.5,-6.12,-6.54,-6.96,-6.84,-6.36,-5.87,-6.76,-7.34,-6.75,-6.78,-6.07,-6.5,-8.92,-8.63,-8.01,-10.58,-11.89,-10.31,-10.83,-11.34,-6.38,-6.19,-6.96,-8.16,-8,-8.84,-8.12,-8.16,-7.88,-8.42,-8.06,-10.45,-6.21,-6.5,-6.82,-6.53,-3.48,-2.94,-4.03,-5,-3.74,-4.13,-3.41,-3.79,-6.58,-8.16,-7.25,-9.4,-7.07,-6.43,-6.82,-6.37,-6.68,-6.74,-6.9,-6.61,-5.78,-6.07,-5.28,-5.39,-3.62,-3.97,-3.46,-3.82,-10.44,-10.65,-10.83,-10.51,-10.22,-9.8,-10.75,-11.7,-10.38,-10.48,-9.91,-10.59,-13.54,-13.1,-12.76,-14.47,-13.79,-12.85,-13.1,-13.36,-9.12,-9.16,-8.63,-10.21,-11.69,-11.71,-4.14,-11.29,-9.7,-10.42,-10.33,-11.93,-3.52,-3.06,-3.97,-2.7,-0.9,-0.14,-1.28,-1.68,-1.72,-1.72,-1.2,-1.38,-4.2,-4.52,-3.96,-5.42,-8.23,-8.12,-8.16,-8.83,-7.95,-8.46,-7.98,-8.78,-7,-6.56,-5.89,-6.64,-4.24,-4.52,-3.31,-4.48,-8.06,-8.2,-8.42,-8.33,-9.26,-9.01,-9.43,-10.15,-8.13,-8.32,-7.65,-7.85,-10.52,-10.42,-9.43,-11.76,-10.58,-9.8,-10.48,-10.56,-6.8,-6.32,-6.78,-7.78,-8.25,-8.49,-8.09,-8.15,-7.63,-8.32,-7.79,-9.51,-5.36,-5.07,-6.07,-4.49,-2.56,-1.95,-2.73,-3.53,-3.11,-3.17,-2.72,-3.04,-5.99,-6.56,-5.99,-7.97,-4.14,-3.85,-4.13,-4.03,-4.27,-4.25,-4.22,-4.73,-2.98,-3.17,-2.89,-2.82,-1.63,-1.72,-1.32,-1.91,-7.71,-8.43,-8.84,-9.05,-8.08,-7.87,-8.4,-9.43,-8.47,-8.49,-8.11,-8.81,-11.31,-11.71,-11.06,-13.15,-9.32,-9.71,-9.8,-10.72,-6.09,-5.54,-5.87,-7.24,-7.33,-7.87,-7.11,-7.4,-6.69,-9.01,-7.48,-8.98,-6.08,-6.12,-6.74,-7.15,-3.19,-3.26,-3.58,-5.03,-4.13,-4.25,-3.13,-3.78,-6.7,-8.46,-7.15,-10.04,-3.45,-2.47,-2.94,-2.37,-2.92,-3.26,-2.75,-2.81,-2.02,-1.95,-1.03,-1.32,-0.56,-0.14,-0.03,-0.14,-5.77,-6.51,-6.19,-6.87,-5.31,-5.54,-5.92,-6.78,-6.36,-6.32,-5.75,-6.38,-8.13,-9.16,-7.38,-9.21,-11.18,-10.31,-10.65,-11.58,-6.98,-6.51,-6.54,-7.44,-8.6,-8.43,-8.07,-8.16,-7.69,-8.2,-8.88,-11.61,-5.95,-6.08,-6.43,-6.55,-2.98,-2.47,-3.34,-4.44,-3.68,-3.85,-3.2,-3.6,-6.49,-8.12,-6.88,-9.26,-6.36,-6.08,-6.5,-6.05,-6.72,-6.12,-6.31,-6.5,-5.45,-5.07,-4.6,-4.81,-3.22,-3.06,-2.54,-3.22,-9.57,-10.31,-10.31,-10.54,-9.98,-9.71,-9.9,-10.72,-10.24,-9.8,-9.44,-10.3,-12.85,-12.85,-11.93,-14.68,-13.29,-12.85,-13.54,-13.87,-8.51,-8.13,-8.92,-9.96,-11.35,-11.31,-10.83,-10.74,-9.98,-10.52,-10.25,-12.2,-3.73,-3.22,-3.62,-3.2,-1.39,-0.56,-1.23,-1.54,-1.6,-1.63,-1.22,-1.3,-3.97,-4.24,-3.9,-6.07,-7.17,-6.49,-6.58,-7.4,-6.48,-6.7,-7.22,-7.92,-5.96,-5.99,-5.01,-5.43,-3.97,-4.2,-3.05,-4.26,-7.14,-7.69,-7.88,-8.95,-7,-6.69,-8.11,-8.52,-7.32,-7.63,-7.47,-8.23,-9.98,-9.7,-10.01,-12.63,-10.81,-10.24,-10.38,-10.83,-6.62,-6.36,-6.75,-7.5,-8.28,-8.47,-7.96,-8.11,-7.32,-8.13,-7.81,-9.91,-5.2,-5.45,-5.78,-5.7,-2.42,-2.02,-2.77,-3.38,-2.98,-2.98,-2.54,-2.76,-5.96,-7,-6.17,-8.86,-3.8,-3.68,-3.74,-3.73,-3.81,-4.13,-3.94,-4.25,-2.98,-3.11,-2.52,-2.38,-1.6,-1.72,-0.94,-1.47,-7.55,-8.6,-8,-8.93,-7.82,-7.33,-8.3,-9.33,-8.28,-8.25,-7.71,-8.49,-11.35,-11.69,-10.91,-13.05,-10.28,-9.98,-10.22,-10.92,-6.32,-5.31,-6.36,-7.1,-7.82,-8.08,-7.04,-7.1,-7,-9.26,-7.37,-9.02,-5.99,-6.72,-6.68,-7.08,-3.04,-2.92,-3.4,-4.29,-3.81,-4.27,-2.99,-3.56,-6.48,-7.95,-7.11,-9.62,-2.74,-2.98,-3.48,-3.37,-3.04,-3.19,-3.15,-3.36,-2.42,-2.56,-1.44,-1.76,-1.39,-0.9,-0.44,-1.33,-6.61,-6.98,-6.38,-7.03,-6.32,-6.09,-6.69,-7,-6.62,-6.8,-6.1,-6.62,-8.51,-9.12,-8.18,-10.71,-10.7,-9.57,-10.44,-11.32,-6.61,-5.77,-6.12,-8.1,-7.55,-7.71,-7.21,-7.55,-7.14,-8.06,-7.66,-9.65,-5.98,-6.36,-7.07,-7.12,-2.74,-3.45,-3.85,-4.69,-3.8,-4.14,-3.14,-3.36,-7.17,-8.23,-7.48,-10.17,-5.98,-5.95,-6.21,-6.07,-5.99,-6.08,-6.08,-6.66,-5.2,-5.36,-4.39,-4.88,-3.73,-3.52,-2.4,-3.46,-10.7,-11.18,-11.89,-12.37,-10.28,-9.32,-10.88,-12.03,-10.81,-10.58,-10.09,-10.55,-13.29,-13.79,-13.16,-16.51};
const float ROLL_SCORES[2048] = {-5.05,-4.23,-3.62,-3.56,-4.76,-4.8,-5.07,-6.36,-2.98,-2.94,-3.75,-4.3,-3.91,-4.21,-2.43,-5,-1.79,-1.76,-2.15,-3.96,-3.38,-3.37,-2.75,-4.81,-3.05,-2.38,-3.7,-3.24,-3.52,-2.79,-4.01,-3.62,-2.29,-2.4,-2.42,-3.23,-2.49,-3.07,-2.93,-3.43,-3.3,-3.13,-4.18,-4.78,-4.24,-3.28,-4.38,-5.19,-3.91,-5.98,-4.27,-5.48,-6.08,-4.16,-5.22,-6.17,-4.75,-4.9,-5.81,-6.11,-5.21,-5.32,-6.49,-8.57,-0.69,-1.65,-0.56,-1.42,-1.55,-1.11,-1.41,-0.84,-1.88,-2.02,-1.9,-2,-1.03,-1.27,-1.69,-2.71,-1.44,-1.32,-0.96,-1.41,-2.51,-2.55,-2.27,-3.17,-2.06,-2.1,-1.89,-2.71,-2.81,-1.65,-2.46,-2.23,-3.02,-2.72,-1.72,-2.2,-2.29,-1.9,-1.92,-2.63,-3.86,-2.14,-2.95,-3.85,-2.66,-2.49,-3.25,-4.35,-3.91,-4.12,-2.73,-2.71,-3.58,-2.95,-3.54,-3.51,-3.69,-4.46,-4.26,-3.59,-3.98,-4.47,-4.54,-5.49,6.09,5.65,6.2,6.33,3.72,4.68,5.07,4.57,2.96,4.66,3.95,3.69,4.85,5.73,5.15,4.78,5.06,4.47,5.01,4.65,2.56,2.76,3.91,3.68,4.21,4.51,3.67,3.7,5.09,5.64,5.05,5.64,-0.94,-0.64,-0.49,-1.22,-0.94,-0.44,-0.62,-1.2,-1.42,-0.94,-1.8,-2.05,-1.78,-1.63,-2.35,-3.27,-0.98,-2.86,-1.63,-3.25,-1.92,-1.82,-1.42,-1.83,-2.78,-1.9,-2.84,-1.51,-2.87,-2.35,-3.34,-4.78,8.13,6.31,6.14,6.41,6.34,5.54,4.96,3.79,5.89,5.89,5.39,6.22,8.32,5.85,6.33,6.33,5.73,5.69,5.16,3.79,4.34,3.38,3.68,4.04,4.66,5.09,4.26,4.59,5.57,6.57,4.9,5.76,0.04,-0.36,-0.51,-1.32,-0.54,-0.66,-0.66,-1.68,-0.96,-2.07,-1.49,-1.25,-1.24,-0.33,-1.46,-3.29,-2.12,-1.62,-2.51,-2.76,-2.1,-2.07,-2.92,-2.43,-2.45,-2.98,-3.73,-3.86,-2.36,-4.68,-4.4,-5.12,-3.67,-3,-2.18,-3.13,-3.52,-3.82,-3.36,-4.2,-3.14,-2.93,-3.83,-3.79,-3.1,-3.64,-3.18,-3.59,-2.79,-1.93,-1.45,-2.16,-2.86,-2.73,-2.42,-3.46,-2.44,-1.89,-2.76,-2.86,-2.76,-1.98,-2.44,-3.01,-1.95,-2.46,-2.01,-2.83,-2.39,-2.46,-2.45,-3.06,-2.73,-2.77,-3.44,-3.96,-2.07,-2.08,-3.57,-5.04,-3.54,-4.19,-3.62,-3.98,-4.68,-3.42,-4.24,-4.91,-4.67,-4.15,-4.63,-5.53,-4.51,-4.28,-5.55,-5.36,-1.41,-0.61,-1.77,-0.88,-2.03,-1.91,-1.59,-2.04,-2.2,-1.8,-2.12,-2.46,-1.31,-1.14,-1.67,-0.9,-1.61,-1,-0.93,-1.06,-2.33,-2.24,-2.02,-2.4,-1.78,-1.63,-2.36,-1.98,-1.79,-1.08,-1.78,-1.38,-2.26,-1.34,-1.35,-1.93,-1.65,-2.02,-1.71,-2.09,-2.42,-2,-2.4,-2.34,-2.39,-2.29,-3.07,-4.34,-3.71,-2.63,-2.37,-2.59,-3.21,-2.55,-2.69,-2.95,-3.46,-3.5,-3.32,-3.14,-3.26,-3.18,-3.59,-4.65,3.96,4.47,4.66,3.9,4.1,2.96,3.55,3.67,3.31,3.22,2.97,2.74,5.2,4.69,3.67,3.59,3.79,4.38,4.64,4.15,2.4,2.34,2.78,2.79,3.54,3.12,2.85,2.89,4.31,4.71,4.23,4.64,-1.23,-1.52,-1.52,-2.18,-0.99,-1.33,-1.31,-1.58,-1.99,-1.71,-1.96,-2.16,-1.96,-1.61,-2.18,-2.62,-2.69,-2.24,-2.28,-2.59,-2,-2.45,-2.09,-2.1,-2.11,-2.22,-2.75,-2.48,-2.56,-2.39,-2.79,-3.95,6.47,5.9,5.89,5.03,4.12,4.46,4.45,4.89,4.26,4.68,4.32,4.94,5.6,6.01,5.72,6.24,4.07,4.33,4.03,3.72,2.75,2.54,3.09,3.35,2.85,3.27,3.05,2.81,3.4,5.01,4.23,4.19,-0.77,-1.29,-1.42,-2.06,-1.63,-1.52,-1.39,-2.42,-2.08,-1.73,-2.34,-2.19,-1.45,-1.52,-1.85,-2.37,-2.86,-2.89,-2.71,-3.5,-3.34,-1.94,-2.98,-3.26,-2.98,-3.31,-3.78,-3.03,-2.84,-3.27,-3.35,-4.8,-2.19,-2.8,-2.42,-3.54,-3.37,-3.66,-3.44,-3.59,-2.78,-2.97,-2.06,-3.88,-2.87,-2.63,-2.12,-2.97,-1.9,-1.81,-1.18,-2.27,-2.79,-3.39,-2.26,-2.97,-1.86,-1.93,-2.64,-2.54,-1.74,-1.18,-1.4,-1.85,-2.4,-2.15,-1.37,-2.22,-2.18,-2.43,-2.23,-3.13,-2.83,-2.48,-2.99,-3.26,-2.73,-2.39,-3.21,-4.51,-3.28,-3.65,-2.99,-4.26,-4.44,-4.03,-3.87,-4.67,-3.98,-4.47,-4.71,-5.19,-4.86,-4.37,-5.91,-7,-0.38,-0.16,-0.26,-0.24,-1.21,-1.26,-1.22,-1.04,-1.7,-1.47,-2.17,-2.31,-0.47,-0.95,-0.57,-0.8,-1.46,-0.61,-0.51,-2.34,-1.93,-1.77,-1.7,-1.76,-1.26,-1.33,-1.3,-1.44,-0.83,-0.28,-0.84,-0.65,-0.77,-0.89,-0.64,-0.76,-1.33,-1.05,-1.15,-1.39,-1.9,-1.46,-1.66,-2.16,-1.71,-1.69,-1.98,-2.72,-1.95,-2.16,-2.11,-2.22,-2.49,-2.34,-2.27,-2.25,-2.4,-2.51,-2.49,-2.95,-2.83,-2.83,-2.93,-3.27,2.51,4.48,6.57,5.06,2.85,2.39,2.75,3.06,2.59,3.23,2.46,2.64,3.24,3.95,4.13,3.6,2.76,4.6,3.41,3.63,1.31,1.93,2.08,2.54,2.75,2.68,1.79,2.44,2.74,4.06,3.11,3.74,-0.64,-1.97,-1.85,-2.51,-1.75,-1.59,-1.73,-2.05,-2.1,-1.76,-2.41,-2.41,-2.27,-2.88,-2.62,-3.54,-2.83,-2.23,-2.71,-2.45,-3.12,-2.87,-3.15,-2.48,-2.49,-2.8,-3.27,-2.6,-4.02,-2.93,-3.57,-5.06,6.08,6.02,5.73,7.71,5.27,4.92,4.03,3.55,3.24,4.93,4.24,4.64,5.66,5.41,6.28,3.47,5.37,4.27,4.57,4.36,2.8,2.42,2.79,3.13,3.43,3.64,3.38,3.76,3.96,4.99,3.98,5.23,-0.68,-0.89,-0.77,-1.52,-1.2,-0.49,-1.17,-2.01,-1.81,-1.83,-1.87,-2.62,-0.44,-1,-1.9,-1.36,-3.71,-3.25,-3.24,-3.47,-3.44,-3.4,-3.39,-3.95,-3.01,-3.7,-3.81,-4.1,-3.87,-4.84,-4.95,-6.47,-2.46,-1.56,-1.29,-0.94,-3.37,-3.71,-2.87,-3.58,-2.39,-2.63,-3.03,-3.3,-2.19,-2.15,-2.32,-2.38,-1.4,-1.35,-1.45,-2.21,-2.51,-2.67,-2.47,-2.96,-2.09,-2.2,-2.77,-2.32,-1.21,-1.38,-1,-3.9,-1.49,-1.95,-2.01,-2.14,-1.92,-2.19,-2.07,-2.68,-2.45,-2.35,-3.44,-4.49,-2.12,-2.15,-3.67,-4.72,-3.01,-3.1,-2.8,-2.62,-3.24,-2.84,-2.97,-4.73,-3.4,-3.35,-4.17,-4.23,-3.92,-3.9,-4.85,-6.42,0.49,0.22,0.09,0.21,-1.29,-0.98,-0.9,-1.75,-1.53,-1.16,-2.01,-1.77,-1.13,-0.46,-1.37,-1.08,-0.87,-0.86,-0.37,-0.54,-1.55,-1.74,-2.07,-2,-1.33,-1.66,-1.76,-2.44,-0.68,-0.68,-0.69,-0.59,-1.25,-0.7,-0.76,-1.2,-0.91,-0.88,-0.67,-1.26,-1.81,-1.38,-1.81,-2.41,-1.5,-1.51,-2.29,-3.31,-2.1,-3.23,-1.75,-2.07,-2.33,-1.82,-1.85,-2.65,-2.49,-2.39,-2.88,-2.8,-2.47,-2.5,-2.74,-2.89,5.24,5.51,5.39,7.05,4.43,3.63,4.93,4.75,3.97,4.27,3.82,3.56,4.95,5.91,4.02,3.8,5.38,5.47,5.38,5.51,3.14,3.35,3.91,3.35,4.16,4.5,3.27,4.15,4.91,5.8,4.81,5.41,-1.03,-0.76,-0.49,-0.26,-0.81,-0.62,-0.89,-2.1,-0.93,-0.91,-1.23,-1.61,-0.97,-1.05,-1.37,-1.91,-1.11,-1.22,-2.44,-1.51,-1.76,-2.71,-1.2,-1.93,-2.02,-1.9,-2.23,-1.87,-2.51,-1.59,-2.28,-3.21,5.72,6.23,7.53,8.64,6.26,5.87,5.63,7.88,6.03,6.35,5.01,5.33,7.31,7.92,7.32,8.21,5.46,5.89,6.83,6.62,2.7,6.64,4.45,4.34,4.6,4.82,3.97,3.78,5.8,6.07,6.28,6.26,0.18,0.57,0.69,0.04,0.19,-0.53,-0.23,-0.84,-0.69,-1.8,-0.97,-1.3,-0.49,-0.54,-1.63,-0.63,-3,-1.41,-0.99,-0.95,-2.67,-3.1,-3.68,-2.56,-1.64,-2.61,-3.36,-2.61,-2.75,-2.76,-4.32,-5.09,-5.09,-6.47,-4.8,-5.12,-3.21,-5.06,-3.95,-4.78,-2.89,-3.27,-4.65,-5.49,-6.42,-7,-5.36,-8.57,-0.63,-1.36,-2.37,-3.29,-1.91,-3.54,-2.62,-3.27,-3.31,-2.72,-4.34,-4.35,-4.72,-4.51,-5.04,-5.19,6.26,5.23,4.19,5.76,5.41,3.74,4.64,5.64,-0.59,-0.65,-1.38,-2.23,-3.9,-1.85,-3.01,-3.62,8.21,3.47,6.24,6.33,3.8,3.6,3.59,4.78,-1.08,-0.8,-0.9,-2.71,-2.38,-2.97,-3.59,-5,-2.61,-4.1,-3.03,-3.86,-1.87,-2.6,-2.48,-1.51,-2.8,-2.95,-3.14,-3.59,-4.23,-5.19,-5.53,-6.11,-1.3,-2.62,-2.19,-1.25,-1.61,-2.41,-2.16,-2.05,-2.41,-2.16,-2.34,-3.85,-4.49,-3.26,-3.96,-4.78,3.78,3.76,2.81,4.59,4.15,2.44,2.89,3.7,-2.44,-1.44,-1.98,-2.71,-2.32,-2.54,-2.86,-3.24,5.33,4.64,4.94,6.22,3.56,2.64,2.74,3.69,-1.77,-2.31,-2.46,-2,-3.3,-3.88,-3.79,-4.3,-2.56,-3.95,-3.26,-2.43,-1.93,-2.48,-2.1,-1.83,-2.65,-2.25,-2.95,-3.51,-4.73,-4.67,-4.91,-6.17,-0.84,-2.01,-2.42,-1.68,-2.1,-2.05,-1.58,-1.2,-1.26,-1.39,-2.09,-2.63,-2.68,-3.13,-3.06,-3.43,4.34,3.13,3.35,4.04,3.35,2.54,2.79,3.68,-2,-1.76,-2.4,-3.17,-2.96,-2.97,-3.46,-4.81,7.88,3.55,4.89,3.79,4.75,3.06,3.67,4.57,-1.75,-1.04,-2.04,-0.84,-3.58,-3.59,-4.2,-6.36,-0.95,-3.47,-3.5,-2.76,-1.51,-2.45,-2.59,-3.25,-2.07,-2.22,-2.59,-2.71,-2.62,-4.26,-3.98,-5.48,0.04,-1.52,-2.06,-1.32,-0.26,-2.51,-2.18,-1.22,-1.2,-0.76,-1.93,-2.2,-2.14,-2.22,-2.83,-3.23,6.62,4.36,3.72,3.79,5.51,3.63,4.15,4.65,-0.54,-2.34,-1.06,-1.41,-2.21,-2.27,-2.16,-3.96,8.64,7.71,5.03,6.41,7.05,5.06,3.9,6.33,0.21,-0.24,-0.88,-1.42,-0.94,-3.54,-3.13,-3.56,-4.32,-4.95,-3.35,-4.4,-2.28,-3.57,-2.79,-3.34,-2.74,-2.93,-3.59,-4.54,-4.85,-5.91,-5.55,-6.49,-1.63,-1.9,-1.85,-1.46,-1.37,-2.62,-2.18,-2.35,-2.29,-1.98,-3.07,-3.25,-3.67,-3.21,-3.57,-4.38,6.28,3.98,4.23,4.9,4.81,3.11,4.23,5.05,-0.69,-0.84,-1.78,-2.46,-1,-1.4,-2.44,-4.01,7.32,6.28,5.72,6.33,4.02,4.13,3.67,5.15,-1.37,-0.57,-1.67,-1.69,-2.32,-2.12,-3.18,-2.43,-3.36,-3.81,-3.78,-3.73,-2.23,-3.27,-2.75,-2.84,-2.88,-2.49,-3.32,-4.26,-4.17,-4.71,-4.63,-5.81,-0.97,-1.87,-2.34,-1.49,-1.23,-2.41,-1.96,-1.8,-1.81,-1.66,-2.4,-2.95,-3.44,-2.99,-3.44,-4.18,3.97,3.38,3.05,4.26,3.27,1.79,2.85,3.67,-1.76,-1.3,-2.36,-1.89,-2.77,-2.64,-2.76,-3.7,5.01,4.24,4.32,5.39,3.82,2.46,2.97,3.95,-2.01,-2.17,-2.12,-1.9,-3.03,-2.06,-3.83,-3.75,-3.68,-3.39,-2.98,-2.92,-1.2,-3.15,-2.09,-1.42,-1.85,-2.27,-2.69,-3.54,-2.97,-3.87,-4.24,-5.22,-0.23,-1.17,-1.39,-0.66,-0.89,-1.73,-1.31,-0.62,-0.67,-1.15,-1.71,-1.92,-2.07,-2.23,-2.45,-2.93,4.45,2.79,3.09,3.68,3.91,2.08,2.78,3.91,-2.07,-1.7,-2.02,-2.27,-2.47,-2.26,-2.42,-2.75,5.63,4.03,4.45,4.96,4.93,2.75,3.55,5.07,-0.9,-1.22,-1.59,-1.41,-2.87,-3.44,-3.36,-5.07,-0.99,-3.24,-2.71,-2.51,-2.44,-2.71,-2.28,-1.63,-1.75,-2.11,-2.37,-2.73,-2.8,-2.99,-3.62,-4.27,0.69,-0.77,-1.42,-0.51,-0.49,-1.85,-1.52,-0.49,-0.76,-0.64,-1.35,-1.72,-2.01,-1.37,-2.01,-2.42,6.83,4.57,4.03,5.16,5.38,3.41,4.64,5.01,-0.37,-0.51,-0.93,-0.96,-1.45,-1.18,-1.45,-2.15,7.53,5.73,5.89,6.14,5.39,6.57,4.66,6.2,0.09,-0.26,-1.77,-0.56,-1.29,-2.42,-2.18,-3.62,-2.76,-4.84,-3.27,-4.68,-1.59,-2.93,-2.39,-2.35,-2.5,-2.83,-3.18,-4.47,-3.9,-4.37,-4.28,-5.32,-0.54,-1,-1.52,-0.33,-1.05,-2.88,-1.61,-1.63,-1.51,-1.69,-2.29,-2.49,-2.15,-2.39,-2.08,-3.28,6.07,4.99,5.01,6.57,5.8,4.06,4.71,5.64,-0.68,-0.28,-1.08,-1.65,-1.38,-1.18,-1.98,-2.79,7.92,5.41,6.01,5.85,5.91,3.95,4.69,5.73,-0.46,-0.95,-1.14,-1.27,-2.15,-2.63,-3.64,-4.21,-2.61,-3.7,-3.31,-2.98,-1.9,-2.8,-2.22,-1.9,-2.39,-2.51,-3.5,-4.46,-3.35,-4.47,-4.15,-4.9,-1.8,-1.83,-1.73,-2.07,-0.91,-1.76,-1.71,-0.94,-1.38,-1.46,-2,-2.14,-2.35,-2.48,-2.77,-3.13,4.82,3.64,3.27,5.09,4.5,2.68,3.12,4.51,-1.66,-1.33,-1.63,-2.1,-2.2,-1.93,-1.89,-2.38,6.35,4.93,4.68,5.89,4.27,3.23,3.22,4.66,-1.16,-1.47,-1.8,-2.02,-2.63,-2.97,-2.93,-2.94,-3.1,-3.4,-1.94,-2.07,-2.71,-2.87,-2.45,-1.82,-1.82,-2.34,-2.55,-2.95,-2.84,-4.03,-3.42,-4.16,-0.53,-0.49,-1.52,-0.66,-0.62,-1.59,-1.33,-0.44,-0.88,-1.05,-2.02,-1.9,-2.19,-2.43,-2.46,-3.07,6.64,2.42,2.54,3.38,3.35,1.93,2.34,2.76,-1.74,-1.77,-2.24,-2.55,-2.67,-3.39,-2.73,-3.37,5.87,4.92,4.46,5.54,3.63,2.39,2.96,4.68,-0.98,-1.26,-1.91,-1.11,-3.71,-3.66,-3.82,-4.8,-1.41,-3.25,-2.89,-1.62,-1.22,-2.23,-2.24,-2.86,-3.23,-2.16,-2.63,-4.12,-3.1,-3.65,-4.19,-5.98,0.57,-0.89,-1.29,-0.36,-0.76,-1.97,-1.52,-0.64,-0.7,-0.89,-1.34,-2.72,-1.95,-2.15,-2.46,-2.4,5.89,4.27,4.33,5.69,5.47,4.6,4.38,4.47,-0.86,-0.61,-1,-1.32,-1.35,-1.81,-1.93,-1.76,6.23,6.02,5.9,6.31,5.51,4.48,4.47,5.65,0.22,-0.16,-0.61,-1.65,-1.56,-2.8,-3,-4.23,-2.75,-3.87,-2.84,-2.36,-2.51,-4.02,-2.56,-2.87,-2.47,-2.83,-3.26,-3.98,-3.92,-4.86,-4.51,-5.21,-0.49,-0.44,-1.45,-1.24,-0.97,-2.27,-1.96,-1.78,-1.5,-1.71,-2.39,-2.66,-2.12,-2.73,-2.07,-4.24,5.8,3.96,3.4,5.57,4.91,2.74,4.31,5.09,-0.68,-0.83,-1.79,-2.81,-1.21,-1.74,-2.76,-3.52,7.31,5.66,5.6,8.32,4.95,3.24,5.2,4.85,-1.13,-0.47,-1.31,-1.03,-2.19,-2.87,-3.1,-3.91,-1.64,-3.01,-2.98,-2.45,-2.02,-2.49,-2.11,-2.78,-2.49,-2.4,-3.46,-3.69,-3.4,-3.98,-4.67,-4.75,-0.69,-1.81,-2.08,-0.96,-0.93,-2.1,-1.99,-1.42,-1.81,-1.9,-2.42,-3.86,-2.45,-2.83,-2.73,-3.3,4.6,3.43,2.85,4.66,4.16,2.75,3.54,4.21,-1.33,-1.26,-1.78,-2.06,-2.09,-1.86,-2.44,-3.05,6.03,3.24,4.26,5.89,3.97,2.59,3.31,2.96,-1.53,-1.7,-2.2,-1.88,-2.39,-2.78,-3.14,-2.98,-2.67,-3.44,-3.34,-2.1,-1.76,-3.12,-2,-1.92,-2.33,-2.49,-3.21,-3.58,-3.24,-4.44,-4.68,-6.08,0.19,-1.2,-1.63,-0.54,-0.81,-1.75,-0.99,-0.94,-0.91,-1.33,-1.65,-2.29,-1.92,-2.18,-2.39,-2.49,2.7,2.8,2.75,4.34,3.14,1.31,2.4,2.56,-1.55,-1.93,-2.33,-2.51,-2.51,-2.79,-2.86,-3.38,6.26,5.27,4.12,6.34,4.43,2.85,4.1,3.72,-1.29,-1.21,-2.03,-1.55,-3.37,-3.37,-3.52,-4.76,-3,-3.71,-2.86,-2.12,-1.11,-2.83,-2.69,-0.98,-2.1,-1.95,-3.71,-3.91,-3.01,-3.28,-3.54,-3.91,0.18,-0.68,-0.77,0.04,-1.03,-0.64,-1.23,-0.94,-1.25,-0.77,-2.26,-3.02,-1.49,-2.4,-1.95,-2.29,5.46,5.37,4.07,5.73,5.38,2.76,3.79,5.06,-0.87,-1.46,-1.61,-1.44,-1.4,-1.9,-2.79,-1.79,5.72,6.08,6.47,8.13,5.24,2.51,3.96,6.09,0.49,-0.38,-1.41,-0.69,-2.46,-2.19,-3.67,-5.05};
const float HELT_SCORES[2048] = {37.74,37.02,37.13,36.93,36.69,35.88,36.56,36.93,36.59,36.57,36.34,35.86,37.22,36.86,36.55,37.52,32.3,32.31,32.56,32.88,32.55,31.94,32.34,32.53,32.29,32.27,32.49,32.14,33.24,33.1,33.16,33.58,34.6,34.88,34.68,35.12,34.71,35.14,35.06,35.24,35.26,35.23,35.8,35.92,35.56,35.45,36.03,36.3,32.44,33.54,32.78,33.17,32.87,32.12,32.67,33.25,33.01,32.89,33.31,33.3,33.31,33.37,33.75,35.11,36.43,36.79,36.45,36.6,35.8,35.39,35.84,35.66,36.49,36.41,36.1,36.01,36.52,36.48,36.68,37.53,34.39,34.13,34.49,34.37,33.86,33.78,34,34.17,34.03,34.34,33.71,34,35.24,35.25,35.04,35.61,36.94,36.97,36.67,36.89,36.83,36.72,36.76,37.02,37.62,37.23,37.3,37.47,37.56,37.48,37.66,38.05,34.75,35.18,34.74,34.73,34.23,34.38,34.58,34.67,35.06,35.27,34.97,34.89,35.6,36.24,35.93,36.86,35.41,35.43,35.22,35.55,35,34.61,35.03,34.72,35.28,35.35,34.83,34.61,35.48,35.7,35.37,36.13,33.73,33.69,33.73,33.64,33.01,33.23,33.55,33.29,33.71,33.2,33.32,33,34.34,34.48,34.3,34.53,34.7,34.39,34.37,34.55,34.18,34.12,34.31,34.47,34.63,34.56,34.28,34.42,34.99,35.08,34.93,35.68,31.57,32.22,31.68,31.86,31.46,31.51,31.49,31.75,32.14,31.96,31.81,31.76,33.06,33.13,32.77,33.88,34.6,35.15,34.54,35.02,34.25,34.5,34.96,35.53,34.63,34.59,34.56,34.44,34.46,35.37,35.01,35.25,35.03,34.93,35.1,34.82,34.46,34.56,34.93,34.88,35.12,35,34.66,34.56,35.76,35.86,35.42,35.94,35.38,35.8,35.64,36.14,35.76,35.6,35.82,36.22,36.24,36.59,36.09,36.16,36.79,36.37,36.47,37.56,35.37,35.33,35.53,35.9,34.93,34.93,35.34,35.45,36.06,35.86,35.6,36.11,36.55,37.28,36.7,37.68,36.32,35.91,36.01,35.77,35.03,34.75,34.96,35.22,35.68,35.71,35.45,35.24,35.93,35.63,35.53,36.17,31.51,31.39,31.76,31.47,31.53,31.33,31.38,31.49,31.46,31.47,31.39,31.33,31.76,31.79,31.83,32.41,33.76,34.25,34.03,34.24,34.18,34.1,34.21,34.58,34.68,34.65,34.81,34.84,34.57,34.65,34.87,35.44,31.94,32.43,32.1,32.32,32.03,31.66,31.96,32.37,32.48,32.29,32.41,32.82,32.72,32.75,32.93,33.42,36.46,35.39,36.02,35.99,35.79,35.57,35.75,35.76,36.22,36.13,35.8,35.78,36.04,36.16,36.29,36.57,33.66,33.49,33.99,33.66,33.55,33.25,33.56,33.44,33.82,33.85,33.57,33.51,34.33,34.41,34.36,34.89,36.34,36.22,36.31,36.28,36.2,36.31,36.24,36.67,37.04,36.85,36.61,36.64,37.31,37.17,37.09,37.74,34.56,34.52,34.34,34.69,34.04,33.92,34.16,34.36,34.83,34.74,34.71,34.74,35.3,35.52,35.19,36.2,34.35,34.37,34.8,34.49,33.98,33.94,34.49,33.95,35.01,34.75,34.26,33.99,34.78,34.82,34.59,35.25,32.71,32.59,32.7,32.49,32.42,32.3,32.46,32.31,32.79,32.44,32.32,32.08,33.14,33.34,33.02,33.41,33,33.53,33.11,33.39,32.95,33.41,33.44,33.79,33.75,33.78,33.68,33.54,34.04,33.99,33.92,34.57,31.43,31.36,31.25,31.21,31.14,30.94,31.29,31.35,31.45,31.41,31.38,31.62,32.17,32.11,32.06,32.81,34.25,34.34,34.23,34.68,34.42,34.06,34.48,34.24,34.52,34.2,34.23,33.82,34.63,34.49,34.46,34.79,34.78,34.48,34.6,34.03,34.34,34.09,34.2,34.18,34.64,34.69,34.22,34.03,34.99,35.12,34.92,35.07,34.78,35.2,35.33,35.47,35.51,35.42,35.46,35.7,36.11,36.17,35.97,36.03,36.16,36.44,36.17,36.4,35.05,35.18,35.06,35.5,34.93,31.76,35.02,35.25,35.57,35.58,35.48,35.7,36.4,36.33,36.17,36.95,35.51,35.41,35.28,35.49,34.77,34.98,34.57,34.94,35.19,35.01,31.89,34.76,35.12,35.08,34.92,35.62,31.59,31.18,31.42,31.12,31.21,31.11,31.14,31.38,31.23,31.2,31.16,31.01,31.52,31.61,31.46,31.73,33.59,33.74,33.35,33.53,33.77,33.81,33.73,34.05,34.27,34.05,34.14,34.31,34.28,34.3,34.12,34.91,31.48,31.84,31.46,32.04,31.75,31.61,31.54,32,31.93,32.14,32.03,32.25,32.4,32.41,32.69,33.42,35.62,35.23,35.61,35.52,35.18,34.97,35.31,35.21,35.73,35.57,35.73,35.38,35.68,35.83,35.54,36.19,34.24,33.51,33.8,32.93,33.56,33.22,33.44,33.51,33.58,33.59,33.23,33.27,34.27,34.36,34.17,34.48,35.42,35.64,35.54,35.58,35.66,35.54,35.7,35.9,36.34,36.24,36.18,36.31,36.72,36.67,36.68,37.15,33.58,34.02,33.97,34.16,33.8,33.53,33.78,33.84,34.29,34.26,34.01,34.44,34.89,35.1,34.9,35.48,34.57,34.61,34.44,34.4,33.91,34.05,34.09,34.39,34.79,34.18,34.27,34.11,34.97,34.66,34.54,34.87,32.67,32.31,32.81,32.57,32.84,32.53,32.61,32.44,33.13,32.35,32.31,32.34,33.27,33.7,33.08,33.45,32.76,33.54,33.55,33.45,33.58,33.24,33.41,33.75,33.49,33.62,33.41,33.61,34.12,34.07,33.87,34.22,31.45,31.47,31.41,31.71,30.94,31.17,31.18,31.34,31.54,31.5,31.42,31.44,32.34,32.51,32.02,32.79,34.35,34.71,34.54,34.46,34.35,34.19,34.66,35,35.06,34.25,34.3,34.13,34.63,35.03,33.89,35.89,34.21,34.47,34.37,34.24,33.98,33.88,34.28,34.21,34.5,34.24,33.75,33.86,34.82,35.2,34.79,34.91,34.56,34.84,34.92,35.1,35.17,34.73,35.13,35.94,35.8,35.79,35.58,36.23,35.31,35.6,35.65,35.92,34.68,35.04,34.87,35.03,34.76,34.56,34.89,35.05,35.14,35.11,35.02,35.47,36.11,36.3,36.1,37.18,35.6,35.7,35.72,35.79,34.89,34.66,34.85,35.16,35.32,35.27,35.08,34.85,35.37,35.43,35.28,35.92,31.57,31.4,31.64,31.29,31.66,31.16,31.51,31.46,31.39,31.38,31.35,31.13,31.63,31.7,31.53,32.1,33.4,33.82,33.6,34.06,33.57,33.73,33.93,34.3,34.38,34.43,34.53,34.69,34.42,34.47,34.56,35.21,31.78,31.96,31.78,32.12,31.46,31.26,31.62,32.21,31.94,31.89,32.31,32.48,32.48,32.4,32.92,33.85,34.89,35.1,35.12,35.03,35.17,34.61,34.81,35.29,35.3,35.16,35.47,35.14,35.75,35.36,35.6,36.14,33.8,33.85,33.79,33.69,33.23,33.26,33.45,33.53,33.34,33.36,33.23,33.35,34.3,34.81,34.3,34.89,35.49,35.64,35.46,35.6,35.53,35.63,35.52,35.83,36.44,36.2,36.27,36.26,36.48,36.65,36.61,37.13,33.74,33.91,33.68,34.26,33.59,33.07,33.55,33.88,34.2,34.23,34.09,34.36,34.78,34.7,34.81,35.22,34.64,34.53,34.69,34.6,34.38,34.07,34.29,34.41,34.48,34.66,34.15,33.87,35.1,35,34.64,34.98,32.98,33.01,33.06,32.77,32.77,32.86,32.47,32.64,33.31,32.65,32.6,32.44,33.73,33.99,33.65,33.66,33.66,33.74,33.75,33.69,33.64,33.6,33.51,34.6,33.69,34.12,33.65,33.6,34.64,34.22,34.17,34.9,31.27,31.57,30.99,31.88,31.28,31.02,31.17,31.6,31.77,31.51,31.48,31.7,32.43,32.47,32.42,33.18,34.67,34.81,34.36,34.44,34.4,34.35,34.68,34.45,34.6,34.26,34.64,34.55,34.57,34.54,34.59,34.83,34.59,34.65,34.61,34.6,34.57,34.28,34.72,34.6,34.61,34.85,34.5,34.41,35.27,35.72,34.98,35.64,34.8,35.08,34.8,35.39,34.95,35.61,35.53,36,36.04,35.82,36.01,36.26,36.55,36.46,36.61,36.52,35.63,35.72,35.53,35.94,35.3,35.2,35.29,35.77,35.9,35.88,35.97,36.02,36.72,36.92,37,38.01,38.01,37.18,36.95,37.68,33.18,32.79,32.81,33.88,35.22,35.48,36.2,36.86,33.85,33.42,33.42,35.11,36.52,35.92,36.4,37.56,34.9,34.22,34.57,35.68,37.13,37.15,37.74,38.05,35.21,34.91,35.44,36.3,35.64,34.91,35.07,35.94,33.66,33.45,33.41,34.53,34.89,34.48,34.89,35.61,32.1,31.73,32.41,33.58,34.83,35.89,34.79,35.25,34.98,34.87,35.25,36.13,36.14,36.19,36.57,37.53,35.92,35.62,36.17,37.52,36.02,35.47,35.7,36.11,31.7,31.44,31.62,31.76,34.36,34.44,34.74,34.89,32.48,32.25,32.82,33.3,36.26,36.23,36.03,36.16,33.6,33.61,33.54,34.42,36.26,36.31,36.64,37.47,34.69,34.31,34.84,35.92,34.41,33.86,34.03,34.56,32.44,32.34,32.08,33,33.35,33.27,33.51,34,31.13,31.01,31.33,32.14,34.55,34.13,33.82,34.44,33.87,34.11,33.99,34.61,35.14,35.38,35.78,36.01,34.85,34.76,35.24,35.86,35.77,35.05,35.25,35.45,31.6,31.34,31.35,31.75,33.88,33.84,34.36,34.67,32.21,32,32.37,33.25,36,35.94,35.7,36.22,34.6,33.75,33.79,34.47,35.83,35.9,36.67,37.02,34.3,34.05,34.58,35.24,34.6,34.21,34.18,34.88,32.64,32.44,32.31,33.29,33.53,33.51,33.44,34.17,31.46,31.38,31.49,32.53,34.45,35,34.24,35.53,34.41,34.39,33.95,34.72,35.29,35.21,35.76,35.66,35.16,34.94,35.22,36.93,35.94,35.03,35.5,35.9,31.88,31.71,31.21,31.86,34.26,34.16,34.69,34.73,32.12,32.04,32.32,33.17,35.39,35.1,35.47,36.14,33.69,33.45,33.39,34.55,35.6,35.58,36.28,36.89,34.06,33.53,34.24,35.12,34.6,34.24,34.03,34.82,32.77,32.57,32.49,33.64,33.69,32.93,33.66,34.37,31.29,31.12,31.47,32.88,34.44,34.46,34.68,35.02,34.6,34.4,34.49,35.55,35.03,35.52,35.99,36.6,35.79,35.49,35.77,36.93,37,36.1,36.17,36.7,32.42,32.02,32.06,32.77,34.81,34.9,35.19,35.93,32.92,32.69,32.93,33.75,36.61,35.65,36.17,36.47,34.17,33.87,33.92,34.93,36.61,36.68,37.09,37.66,34.56,34.12,34.87,36.03,34.98,34.79,34.92,35.42,33.65,33.08,33.02,34.3,34.3,34.17,34.36,35.04,31.53,31.46,31.83,33.16,34.59,33.89,34.46,35.01,34.64,34.54,34.59,35.37,35.6,35.54,36.29,36.68,35.28,34.92,35.53,36.55,35.97,35.02,35.48,35.6,31.48,31.42,31.38,31.81,34.09,34.01,34.71,34.97,32.31,32.03,32.41,33.31,36.01,35.58,35.97,36.09,33.65,33.41,33.68,34.28,36.27,36.18,36.61,37.3,34.53,34.14,34.81,35.8,34.5,33.75,34.22,34.66,32.6,32.31,32.32,33.32,33.23,33.23,33.57,33.71,31.35,31.16,31.39,32.49,34.64,34.3,34.23,34.56,34.15,34.27,34.26,34.83,35.47,35.73,35.8,36.1,35.08,31.89,35.45,36.34,35.29,34.89,35.02,35.34,31.17,31.18,31.29,31.49,33.55,33.78,34.16,34.58,31.62,31.54,31.96,32.67,35.53,35.13,35.46,35.82,33.51,33.41,33.44,34.31,35.52,35.7,36.24,36.76,33.93,33.73,34.21,35.06,34.72,34.28,34.2,34.93,32.47,32.61,32.46,33.55,33.45,33.44,33.56,34,31.51,31.14,31.38,32.34,34.68,34.66,34.48,34.96,34.29,34.09,34.49,35.03,34.81,35.31,35.75,35.84,34.85,34.57,34.96,36.56,35.53,34.87,35.06,35.53,30.99,31.41,31.25,31.68,33.68,33.97,34.34,34.74,31.78,31.46,32.1,32.78,34.8,34.92,35.33,35.64,33.75,33.55,33.11,34.37,35.46,35.54,36.31,36.67,33.6,33.35,34.03,34.68,34.61,34.37,34.6,35.1,33.06,32.81,32.7,33.73,33.79,33.8,33.99,34.49,31.64,31.42,31.76,32.56,34.36,34.54,34.23,34.54,34.69,34.44,34.8,35.22,35.12,35.61,36.02,36.45,35.72,35.28,36.01,37.13,36.92,36.3,36.33,37.28,32.47,32.51,32.11,33.13,34.7,35.1,35.52,36.24,32.4,32.41,32.75,33.37,36.46,35.6,36.44,36.37,34.22,34.07,33.99,35.08,36.65,36.67,37.17,37.48,34.47,34.3,34.65,35.45,35.72,35.2,35.12,35.86,33.99,33.7,33.34,34.48,34.81,34.36,34.41,35.25,31.7,31.61,31.79,33.1,34.54,35.03,34.49,35.37,35,34.66,34.82,35.7,35.36,35.83,36.16,36.48,35.43,35.08,35.63,36.86,35.88,35.11,35.58,35.86,31.51,31.5,31.41,31.96,34.23,34.26,34.74,35.27,31.89,32.14,32.29,32.89,35.82,35.79,36.17,36.59,34.12,33.62,33.78,34.56,36.2,36.24,36.85,37.23,34.43,34.05,34.65,35.23,34.85,34.24,34.69,35,32.65,32.35,32.44,33.2,33.36,33.59,33.85,34.34,31.38,31.2,31.47,32.27,34.26,34.25,34.2,34.59,34.66,34.18,34.75,35.35,35.16,35.57,36.13,36.41,35.27,35.01,35.71,36.57,35.2,34.56,31.76,34.93,31.02,31.17,30.94,31.51,33.07,33.53,33.92,34.38,31.26,31.61,31.66,32.12,35.61,34.73,35.42,35.6,33.6,33.24,33.41,34.12,35.63,35.54,36.31,36.72,33.73,33.81,34.1,35.14,34.28,33.88,34.09,34.56,32.86,32.53,32.3,33.23,33.26,33.22,33.25,33.78,31.16,31.11,31.33,31.94,34.35,34.19,34.06,34.5,34.07,34.05,33.94,34.61,34.61,34.97,35.57,35.39,34.66,34.98,34.75,35.88,35.72,35.04,35.18,35.33,31.57,31.47,31.36,32.22,33.91,34.02,34.52,35.18,31.96,31.84,32.43,33.54,35.08,34.84,35.2,35.8,33.74,33.54,33.53,34.39,35.64,35.64,36.22,36.97,33.82,33.74,34.25,34.88,34.65,34.47,34.48,34.93,33.01,32.31,32.59,33.69,33.85,33.51,33.49,34.13,31.4,31.18,31.39,32.31,34.81,34.71,34.34,35.15,34.53,34.61,34.37,35.43,35.1,35.23,35.39,36.79,35.7,35.41,35.91,37.02,36.72,36.11,36.4,36.55,32.43,32.34,32.17,33.06,34.78,34.89,35.3,35.6,32.48,32.4,32.72,33.31,36.55,35.31,36.16,36.79,34.64,34.12,34.04,34.99,36.48,36.72,37.31,37.56,34.42,34.28,34.57,35.56,35.27,34.82,34.99,35.76,33.73,33.27,33.14,34.34,34.3,34.27,34.33,35.24,31.63,31.52,31.76,33.24,34.57,34.63,34.63,34.46,35.1,34.97,34.78,35.48,35.75,35.68,36.04,36.52,35.37,35.12,35.93,37.22,35.9,35.14,35.57,36.06,31.77,31.54,31.45,32.14,34.2,34.29,34.83,35.06,31.94,31.93,32.48,33.01,36.04,35.8,36.11,36.24,33.69,33.49,33.75,34.63,36.44,36.34,37.04,37.62,34.38,34.27,34.68,35.26,34.61,34.5,34.64,35.12,33.31,33.13,32.79,33.71,33.34,33.58,33.82,34.03,31.39,31.23,31.46,32.29,34.6,35.06,34.52,34.63,34.48,34.79,35.01,35.28,35.3,35.73,36.22,36.49,35.32,35.19,35.68,36.59,35.3,34.76,34.93,34.93,31.28,30.94,31.14,31.46,33.59,33.8,34.04,34.23,31.46,31.75,32.03,32.87,34.95,35.17,35.51,35.76,33.64,33.58,32.95,34.18,35.53,35.66,36.2,36.83,33.57,33.77,34.18,34.71,34.57,33.98,34.34,34.46,32.77,32.84,32.42,33.01,33.23,33.56,33.55,33.86,31.66,31.21,31.53,32.55,34.4,34.35,34.42,34.25,34.38,33.91,33.98,35,35.17,35.18,35.79,35.8,34.89,34.77,35.03,36.69,35.63,34.68,35.05,35.37,31.27,31.45,31.43,31.57,33.74,33.58,34.56,34.75,31.78,31.48,31.94,32.44,34.8,34.56,34.78,35.38,33.66,32.76,33,34.7,35.49,35.42,36.34,36.94,33.4,33.59,33.76,34.6,34.59,34.21,34.78,35.03,32.98,32.67,32.71,33.73,33.8,34.24,33.66,34.39,31.57,31.59,31.51,32.3,34.67,34.35,34.25,34.6,34.64,34.57,34.35,35.41,34.89,35.62,36.46,36.43,35.6,35.51,36.32,37.74};
